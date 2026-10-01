from selenium import webdriver

driver = webdriver.Chrome()

driver.get("https://www.saucedemo.com")

# Escribir usuario
driver.find_element("id", "user-name").send_keys("standard_user")

# Escribir contraseña
driver.find_element("id", "password").send_keys("secret_sauce")

# Click login
driver.find_element("id", "login-button").click()

# Validación simple
assert "inventory" in driver.current_url

print("Login exitoso")

driver.quit()