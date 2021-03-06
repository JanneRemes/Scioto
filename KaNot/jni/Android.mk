# Copyright (C) 2009 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := libKaNot
LOCAL_CFLAGS    := -Werror

LOCAL_C_INCLUDES:= 	$(LOCAL_PATH)/../Android/include \
					$(LOCAL_PATH)/../Common/include

LOCAL_SRC_FILES := 	../Android/src/gl_code.cpp \
					../Common/src/Debug.cpp \
					../Common/src/Engine.cpp \
					../Common/src/FileReader.cpp \
					../Common/src/Shader.cpp \
					../Common/src/Sprite.cpp \
					../Common/src/Texture.cpp \
					../Common/src/Viewport.cpp \
					../Common/src/Sciotomath/Rectangle.cpp\
					../Common/src/Sciotomath/Vector2.cpp\
					../Common/src/Sciotomath/Vector3.cpp\
					../Common/src/Sciotomath/Vector4.cpp
					
					
LOCAL_LDLIBS    := -llog -lGLESv2 -landroid

include $(BUILD_SHARED_LIBRARY)
