{.link:"libNimQt.a" passL:"-lQt5Core -lQt5Gui -lQt5Widgets".}

proc initQt: cint {.importC.}
proc sendNim*(text:cstring) {.exportC.} = echo text

# ---

when isMainModule:
  discard initQt()