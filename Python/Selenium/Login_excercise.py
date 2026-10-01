from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.chrome.service import Service
from webdriver_manager.chrome import ChromeDriverManager
import time

driver = webdriver.Chrome(
    service=Service(ChromeDriverManager().install())
)

driver.maximize_window()

driver.get("https://www.saucedemo.com/")

# =========================
# FUNCIÓN LOGIN
# =========================

def login(user, password):
    driver.find_element(By.ID, "user-name").clear()
    driver.find_element(By.ID, "password").clear()

    if user:
        driver.find_element(By.ID, "user-name").send_keys(user)

    if password:
        driver.find_element(By.ID, "password").send_keys(password)

    driver.find_element(By.ID, "login-button").click()
    time.sleep(2)

# =========================
# 1. LOGIN EXITOSO
# =========================

login("standard_user", "secret_sauce")

assert "inventory.html" in driver.current_url
print("Login exitoso OK")

driver.get("https://www.saucedemo.com/")

# =========================
# 2. PASSWORD INCORRECTO
# =========================

login("standard_user", "wrong_password")

error = driver.find_element(By.CSS_SELECTOR, "h3[data-test='error']").text
print("Error password:", error)

assert "Username and password do not match" in error

driver.refresh()

# =========================
# 3. CAMPOS VACÍOS
# =========================

login("", "")

error2 = driver.find_element(By.CSS_SELECTOR, "h3[data-test='error']").text
print("Error vacío:", error2)

assert "Username is required" in error2

print("TODOS LOS TESTS PASARON")

driver.quit()

# se probaron 3 esenarios donde  uno cue el correcto, uno el fallido y otro el NULL