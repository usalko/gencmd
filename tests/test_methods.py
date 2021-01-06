import os
import unittest
from gencmd import GenCmd, GenCmdException


class TestMethods(unittest.TestCase):

    def test_case_get_throttled(self):
        t = GenCmd()
        print(t.gencmd('get_throttled'))
        self.assertTrue(True)


if __name__ == '__main__':
    unittest.main()
