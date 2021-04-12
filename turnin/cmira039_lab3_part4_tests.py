tests = [ {'description': 'First test. Testing example 1',
    'steps': [ {'inputs': [('PINA',0xFF)], 'iterations': 5 } ],
    'expected': [('PORTB',0x0F), ('PORTC',0xF0)],
    },
	{'description': 'Second test. Testing example 2',
    'steps': [ {'inputs': [('PINA',0x3F)], 'iterations': 5 } ],
    'expected': [('PORTB',0x03), ('PORTC',0xF0)],
    },
	{'description': 'First test. Testing example 1',
    'steps': [ {'inputs': [('PINA',0xC4)], 'iterations': 5 } ],
    'expected': [('PORTB',0x0C), ('PORTC',0x40)],
    },
    ]
#watch = ['PORTB']

