# dlaczego

value = 0

def switch_alt(value):
    switcher = {
        0 : "false",
        1 : "true"
    }
    return (switcher.get(value, "undefined value"))
    pass

switch_alt(value)