# ProstheticHand
This project has morphed into a hand/BMI project. Thank you to all who helped create the hand in the first place.
Our objective is for the prosthetic hand to clench when ours does by detecting our motion through the BCI.
  Step one - aquire timestamped data from BMI and Muscle detection interfaces while clenching/unclenching hand.
  Step two - create or use a machine learning algorithm that uses this data to predict hand state / state change with
    BMI data as the input.

Files of note:
  We are working in openBCIMaster, the rest are some files we are using as supporting software.
    this includes the hands code in Basic Motor Control.
  User.py - program we are using to collect data, unmodified.
  testCyton.py - test that our Cyton board is working, unmodified.
  openBCIGanglion is not currently in use as we dont have that board, unmodified.
