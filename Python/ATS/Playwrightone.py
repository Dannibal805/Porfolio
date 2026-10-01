from playwright.sync_api import sync_playwright

from playwright.sync_api import sync_playwright

with sync_playwright() as p:

    browser = p.chromium.launch(
        channel="chrome",
        headless=False
    )

    page = browser.new_page()

    page.goto("https://www.saucedemo.com")

    page.fill("#user-name", "standard_user")
    page.fill("#password", "secret_sauce")

    page.click("#login-button")

    assert "inventory" in page.url

    print("Login exitoso")

    page.wait_for_timeout(9000)

    browser.close()