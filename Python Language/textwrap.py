import textwrap

def wrap(string, max_width):
    wrapper = textwrap.TextWrapper(max_width)
    value = wrapper.fill(string)
    return value

if __name__ == '__main__':
