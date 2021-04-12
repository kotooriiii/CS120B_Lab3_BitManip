tests = [ {'description': 'First test. Testing example 1',
    'steps': [ {'inputs': [('PINA',0x03), ('PINB', 0xFF)], 'iterations': 5 } ],
    'expected': [('PORTC',0x0A)],
    },
    {'description': 'Second test. Testing example 2',
    'steps': [ {'inputs': [('PINA',0x00), ('PINB', 0x00)], 'iterations': 5 } ],
    'expected': [('PORTC',0x00)],
    },
    {'description': 'Third test. Testing example 3',
    'steps': [ {'inputs': [('PINA',0xFF), ('PINB', 0xFF)], 'iterations': 5 } ],
    'expected': [('PORTC',0x10)],
    },
    ]
#watch = ['PORTB']

