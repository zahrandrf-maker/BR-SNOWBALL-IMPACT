# BR Snowball Camera Smash v0.2.0 Beta

Transparent FFGL source for Resolume Arena on Windows. A snowball approaches from the distance, rushes into the camera, covers the screen, then explodes into large snow chunks.

## Main controls

- **SMASH** starts the complete animation.
- Approach Duration, Perspective Zoom, Approach Wobble, start and impact position control the incoming ball.
- Screen Cover Duration holds the snow on the lens briefly.
- Snow Chunk Amount, Snow Chunk Size, Explosion Speed, and Clear Duration control the breakup.
- End Style: Clean Clear, Chunks Leave, Frost Fade, or Frost Stay.
- Pause, Resume, End, Reset, Auto Reset, colour, opacity, and seed are MIDI/OSC mappable.

The source uses premultiplied transparent output; no green-screen key is required.

## GitHub build

Upload every file and folder, including `.github`, to the root of a GitHub repository. Open **Actions**, run **Build BR Snowball Impact**, and download the artifact. Extract the downloaded ZIP and then the nested `.tar.gz`. Copy `BR Snowball Impact.dll` to `Documents\Resolume Arena\Extra Effects`, restart Resolume, then find **BR Snowball Camera Smash** under Sources.

Effect by Belajar Resolume.
