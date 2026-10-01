from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.chrome.service import Service
from webdriver_manager.chrome import ChromeDriverManager
import time

# =========================
# INICIAR DRIVER
# =========================

driver = webdriver.Chrome(
    service=Service(ChromeDriverManager().install())
)

driver.maximize_window()

# =========================
# ABRIR SITIO
# =========================

driver.get("https://www.saucedemo.com/")

# =========================
# LOGIN
# =========================

driver.find_element(By.ID, "user-name").send_keys("standard_user")

driver.find_element(By.ID, "password").send_keys("secret_sauce")

driver.find_element(By.ID, "login-button").click()

time.sleep(2)


# =========================
# OBTENER PRECIOS
# =========================

precio1_texto = driver.find_element(
    By.XPATH,
    '//*[@id="inventory_container"]/div/div[1]/div[2]/div[2]/div'
).text

precio2_texto = driver.find_element(
    By.XPATH,
    '//*[@id="inventory_container"]/div/div[2]/div[2]/div'
).text

print("Precio 1:", precio1_texto)
print("Precio 2:", precio2_texto)


# =========================
# CONVERTIR A FLOAT
# =========================

precio1 = float(precio1_texto.replace("$", ""))
precio2 = float(precio2_texto.replace("$", ""))

total_esperado = precio1 + precio2

print("Total esperado:", total_esperado)


# =========================
# AGREGAR PRODUCTOS
# =========================

driver.find_element(
    By.ID,
    "add-to-cart-sauce-labs-backpack"
).click()

driver.find_element(
    By.ID,
    "add-to-cart-sauce-labs-bike-light"
).click()

time.sleep(2)

# =========================
# IR AL CARRITO
# =========================

driver.find_element(
    By.CLASS_NAME,
    "shopping_cart_link"
).click()

time.sleep(2)


# =========================
# OBTENER PRECIOS DEL CARRITO
# =========================

precios_carrito = driver.find_elements(
    By.CLASS_NAME,
    "inventory_item_price"
)

total_carrito = 0

for precio in precios_carrito:

    texto = precio.text

    numero = float(texto.replace("$", ""))

    total_carrito += numero

print("Total carrito:", total_carrito)

# =========================
# VALIDAR TOTAL
# =========================

assert total_carrito == total_esperado

print("TEST EXITOSO")

time.sleep(3)

driver.quit()