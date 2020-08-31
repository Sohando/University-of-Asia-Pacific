       /**
 * The reshape callback.
 *
 * @param w   The width
 * @param h   The height
 */
void reshape(int w, int h) {
  GLfloat aspect;

  // Save the width and height for text processing
  width = w;
  height = h;

  glViewport(0, 0, (GLsizei) w, (GLsizei) h);

  glMatrixMode(GL_PROJECTION);

  glLoadIdentity();

  if (w <= h) {
    aspect = (GLfloat) h / (GLfloat) w;
    glOrtho(-1.5, 1.5, -1.5 * aspect, 1.5 * aspect, -10.0, 10.0);
  } else {
    aspect = (GLfloat) w / (GLfloat) h;
    glOrtho(-1.5 * aspect, 1.5 * aspect, -1.5, 1.5, -10.0, 10.0);
  }
}

/**
 * The entry point of the application.
 *
 * This function contains calls to GLUT.
 *
 * @param argc  The number of command line arguments
 * @param argv  The array of command line arguments
 * @return      A status code
 */
int main(int argc, char** argv) {
  glutInit(&argc, argv);

  window = createWindow("Bitmap Fonts", 640, 480, 0, 0);

  glutDisplayFunc(display);
  glutReshapeFunc(reshape);

  init();

  glutMainLoop();
}
