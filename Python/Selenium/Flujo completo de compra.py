from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.chrome.service import Service
from webdriver_manager.chrome import ChromeDriverManager

from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
import time

driver = webdriver.Chrome(
    service=Service(ChromeDriverManager().install())
)

driver.maximize_window()

driver.get("https://www.saucedemo.com/")

# =========================
# 1. LOGIN
# =========================

driver.find_element(By.ID, "user-name").send_keys("standard_user")
driver.find_element(By.ID, "password").send_keys("secret_sauce")
driver.find_element(By.ID, "login-button").click()

wait = WebDriverWait(driver, 10)
wait.until(EC.url_contains("inventory"))


# =========================
# 2. AGREGAR PRODUCTO
# =========================

driver.find_element(By.ID, "add-to-cart-sauce-labs-backpack").click()

remove_btn = wait.until(
    EC.element_to_be_clickable(
        (By.ID, "remove-sauce-labs-backpack")
    )
)

assert remove_btn.is_displayed()
# =========================
# 3. IR AL CARRITO
# =========================

driver.find_element(By.CLASS_NAME, "shopping_cart_link").click()

time.sleep(2)

# =========================
# 4. CHECKOUT
# =========================

driver.find_element(By.ID, "checkout").click()

# =========================
# 5. LLENAR FORMULARIO
# =========================

driver.find_element(By.ID, "first-name").send_keys("Juan")
driver.find_element(By.ID, "last-name").send_keys("Perez")
driver.find_element(By.ID, "postal-code").send_keys("12345")

driver.find_element(By.ID, "continue").click()

time.sleep(2)

# =========================
# 6. FINALIZAR COMPRA
# =========================

driver.find_element(By.ID, "finish").click()

# =========================
# 7. VALIDAR MENSAJE FINAL
# =========================

mensaje = driver.find_element(By.CLASS_NAME, "complete-header").text

print("Mensaje final:", mensaje)

assert "Thank you for your order!" in mensaje

print("COMPRA EXITOSA")

time.sleep(3)

driver.quit()