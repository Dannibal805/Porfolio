from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.chrome.service import Service
from webdriver_manager.chrome import ChromeDriverManager
import time
import os

driver = webdriver.Chrome(
    service=Service(ChromeDriverManager().install())
)

driver.maximize_window()
driver.get("https://www.saucedemo.com/")

# =========================
# SCREENSHOT FUNCTION
# =========================

def take_screenshot(name):
    folder = "screenshots"

    if not os.path.exists(folder):
        os.makedirs(folder)

    path = f"{folder}/{name}.png"
    driver.save_screenshot(path)
    print(f"Screenshot guardado: {path}")

# =========================
# LOGIN FUNCTION
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
# TEST 1 - LOGIN EXITOSO
# =========================

try:
    login("standard_user", "secret_sauce")
    assert "inventory.html" in driver.current_url
    print("LOGIN OK")

except Exception as e:
    print("FALLÓ LOGIN EXITOSO")
    raise e

finally:
    take_screenshot("login_exitoso")

driver.get("https://www.saucedemo.com/")

# =========================
# TEST 2 - PASSWORD INCORRECTO
# =========================

try:
    login("standard_user", "wrong_password")
    error = driver.find_element(By.CSS_SELECTOR, "[data-test='error']").text
    assert "Username and password do not match" in error
    print("ERROR PASSWORD OK")

except Exception as e:
    print("FALLÓ LOGIN PASSWORD")
    raise e

finally:
    take_screenshot("login_password_incorrecto")

driver.refresh()

# =========================
# TEST 3 - CAMPOS VACÍOS
# =========================

try:
    login("", "")
    error2 = driver.find_element(By.CSS_SELECTOR, "[data-test='error']").text
    assert "Username is required" in error2
    print("ERROR CAMPOS VACÍOS OK")

except Exception as e:
    print("FALLÓ CAMPOS VACÍOS")
    raise e

finally:
    take_screenshot("login_campos_vacios")

driver.quit()