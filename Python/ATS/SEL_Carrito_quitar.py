from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC

import time

driver = webdriver.Chrome()
wait = WebDriverWait(driver, 10)

# 1. Abrir página
driver.get("https://www.saucedemo.com")

# 2. Login
wait.until(EC.presence_of_element_located((By.ID, "user-name")))

driver.find_element(By.ID, "user-name").send_keys("standard_user")
driver.find_element(By.ID, "password").send_keys("secret_sauce")
driver.find_element(By.ID, "login-button").click()

# 3. Esperar inventario
wait.until(EC.url_contains("inventory"))

print("✅ Login exitoso")

# 4. Agregar primer producto
driver.find_element(By.ID, "add-to-cart-sauce-labs-backpack").click()
print("🛒 Producto 1 agregado")

time.sleep(3)

# 5. Agregar segundo producto
driver.find_element(By.ID, "add-to-cart-sauce-labs-bike-light").click()
print("🛒 Producto 2 agregado")

time.sleep(3)
# faltaba tiempo para agregar
# 6. Validar badge del carrito
badge = wait.until(
    EC.visibility_of_element_located((By.CLASS_NAME, "shopping_cart_badge"))
)
assert badge.text == "2"

print("✅ Carrito tiene 2 productos")

# 7. Abrir carrito
driver.find_element(By.CLASS_NAME, "shopping_cart_link").click()

# 8. Esperar productos en carrito
wait.until(
    EC.presence_of_all_elements_located((By.CLASS_NAME, "inventory_item_name"))
)

# 9. Ver productos
productos = driver.find_elements(By.CLASS_NAME, "inventory_item_name")

for p in productos:
    print("📦", p.text)


driver.find_element(
    By.ID,
    "remove-sauce-labs-bike-light"
).click()

time.sleep(2)

productos = driver.find_elements(
    By.CLASS_NAME,
    "cart_item"
)


cantidad = len(productos)

print("Productos restantes:", cantidad)

assert cantidad == 1

print("TEST EXITOSO")


# 10. Pausa para ver
time.sleep(5)

driver.quit()