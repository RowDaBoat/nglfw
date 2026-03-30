
// #define GLFW_REPEAT                 2
#define GLFW_HAT_CENTERED           0
#define GLFW_HAT_UP                 1
#define GLFW_HAT_RIGHT              2
#define GLFW_HAT_DOWN               4
#define GLFW_HAT_LEFT               8
#define GLFW_HAT_RIGHT_UP           (GLFW_HAT_RIGHT | GLFW_HAT_UP)
#define GLFW_HAT_RIGHT_DOWN         (GLFW_HAT_RIGHT | GLFW_HAT_DOWN)
#define GLFW_HAT_LEFT_UP            (GLFW_HAT_LEFT  | GLFW_HAT_UP)
#define GLFW_HAT_LEFT_DOWN          (GLFW_HAT_LEFT  | GLFW_HAT_DOWN)
// #define GLFW_KEY_UNKNOWN            -1

// #define GLFW_MOD_SUPER           0x0008
#define GLFW_MOD_CAPS_LOCK       0x0010
#define GLFW_MOD_NUM_LOCK        0x0020
// #define GLFW_MOUSE_BUTTON_1         0

#define GLFW_NO_ERROR               0
// #define GLFW_NOT_INITIALIZED        0x00010001

// #define GLFW_NO_WINDOW_CONTEXT      0x0001000A
#define GLFW_CURSOR_UNAVAILABLE     0x0001000B
#define GLFW_FEATURE_UNAVAILABLE    0x0001000C
#define GLFW_FEATURE_UNIMPLEMENTED  0x0001000D
// #define GLFW_FOCUSED                0x00020001

// #define GLFW_MAXIMIZED              0x00020008
#define GLFW_CENTER_CURSOR          0x00020009
#define GLFW_TRANSPARENT_FRAMEBUFFER 0x0002000A
#define GLFW_HOVERED                0x0002000B
// #define GLFW_FOCUS_ON_SHOW          0x0002000C

// #define GLFW_CONTEXT_CREATION_API   0x0002200B
#define GLFW_SCALE_TO_MONITOR       0x0002200C
#define GLFW_COCOA_RETINA_FRAMEBUFFER 0x00023001
#define GLFW_COCOA_FRAME_NAME         0x00023002
#define GLFW_COCOA_GRAPHICS_SWITCHING 0x00023003
#define GLFW_X11_CLASS_NAME         0x00024001
#define GLFW_X11_INSTANCE_NAME      0x00024002
#define GLFW_WIN32_KEYBOARD_MENU    0x00025001
// #define GLFW_NO_API                          0

// #define GLFW_STICKY_MOUSE_BUTTONS   0x00033003
#define GLFW_LOCK_KEY_MODS          0x00033004
#define GLFW_RAW_MOUSE_MOTION       0x00033005
// #define GLFW_CURSOR_NORMAL          0x00034001

// #define GLFW_RELEASE_BEHAVIOR_NONE  0x00035002
#define GLFW_NATIVE_CONTEXT_API     0x00036001
#define GLFW_EGL_CONTEXT_API        0x00036002
#define GLFW_OSMESA_CONTEXT_API     0x00036003
// #define GLFW_ARROW_CURSOR           0x00036001

// #define GLFW_CROSSHAIR_CURSOR       0x00036003
#define GLFW_POINTING_HAND_CURSOR   0x00036004
#define GLFW_RESIZE_EW_CURSOR       0x00036005
#define GLFW_RESIZE_NS_CURSOR       0x00036006
#define GLFW_RESIZE_NWSE_CURSOR     0x00036007
#define GLFW_RESIZE_NESW_CURSOR     0x00036008
#define GLFW_RESIZE_ALL_CURSOR      0x00036009
#define GLFW_NOT_ALLOWED_CURSOR     0x0003600A
// #define GLFW_HRESIZE_CURSOR         GLFW_RESIZE_EW_CURSOR
// #define GLFW_VRESIZE_CURSOR         GLFW_RESIZE_NS_CURSOR
// #define GLFW_HAND_CURSOR            GLFW_POINTING_HAND_CURSOR

// #define GLFW_DISCONNECTED           0x00040002
#define GLFW_COCOA_CHDIR_RESOURCES  0x00051001
#define GLFW_COCOA_MENUBAR          0x00051002
// #define GLFW_DONT_CARE              -1
typedef void (*GLFWglproc)(void);
typedef void (*GLFWvkproc)(void);
typedef void (* GLFWwindowmaximizefun)(GLFWwindow*,int);
typedef void (* GLFWwindowcontentscalefun)(GLFWwindow*,float,float);
GLFWAPI void glfwInitHint(int hint, int value);
GLFWAPI int glfwGetError(const char** description);
GLFWAPI void glfwGetMonitorWorkarea(GLFWmonitor* monitor, int* xpos, int* ypos, int* width, int* height);
GLFWAPI void glfwSetMonitorUserPointer(GLFWmonitor* monitor, void* pointer);
GLFWAPI void* glfwGetMonitorUserPointer(GLFWmonitor* monitor);
GLFWAPI GLFWmonitorfun glfwSetMonitorCallback(GLFWmonitorfun callback);
GLFWAPI void glfwWindowHintString(int hint, const char* value);
GLFWAPI float glfwGetWindowOpacity(GLFWwindow* window);
GLFWAPI void glfwSetWindowOpacity(GLFWwindow* window, float opacity);
GLFWAPI void glfwRequestWindowAttention(GLFWwindow* window);
GLFWAPI void glfwSetWindowAttrib(GLFWwindow* window, int attrib, int value);
GLFWAPI GLFWwindowmaximizefun glfwSetWindowMaximizeCallback(GLFWwindow* window, GLFWwindowmaximizefun callback);
GLFWAPI GLFWwindowcontentscalefun glfwSetWindowContentScaleCallback(GLFWwindow* window, GLFWwindowcontentscalefun callback);
GLFWAPI int glfwRawMouseMotionSupported(void);
GLFWAPI const char* glfwGetKeyName(int key, int scancode);
GLFWAPI int glfwGetKeyScancode(int key);
