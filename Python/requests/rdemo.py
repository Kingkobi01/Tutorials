import requests

payload = {
    'username':'kwabena', 'password':'testing'
}



url = "https://httpbin.org/basic-auth/kwabena/testing"
response = requests.get(url, auth=('kwabena', 'testing'))


print(response)
