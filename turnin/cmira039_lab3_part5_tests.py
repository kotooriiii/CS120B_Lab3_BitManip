tests = [ {'description': 'First test. Testing example 1',
    'steps': [ {'inputs': [('PIND',0xFF), ('PINB', 0x01)], 'iterations': 5 } ],
    'expected': [('PORTB',0x02)],
    },
	{'description': '2nd test. Testing example 2',
    'steps': [ {'inputs': [('PIND',0x00), ('PINB', 0x01)], 'iterations': 5 } ],
    'expected': [('PORTB',0x00)],
    },
	{'description': '3rd test. Testing example 3',
    'steps': [ {'inputs': [('PIND',0x03), ('PINB', 0x00)], 'iterations': 5 } ],
    'expected': [('PORTB',0x04)],
    },
    ]
#watch = ['PORTB']

