structure Vector2 where
  mk ::
  x : Float
  y : Float
deriving Repr

attribute [extern "lean_raylib__Vector2_mk"] Vector2.mk
attribute [extern "lean_raylib__Vector2_x"] Vector2.x
attribute [extern "lean_raylib__Vector2_y"] Vector2.y
def main := do
  let a := Vector2.mk 1.0 2.0
  IO.println <| repr a
  IO.println a.x
  IO.println a.y
