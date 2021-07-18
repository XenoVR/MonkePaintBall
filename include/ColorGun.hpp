#pragma once

#include "custom-types/shared/macros.hpp"
#include "UnityEngine/MonoBehaviour.hpp"

DECLARE_CLASS_CODEGEN(PaintBall, Gun, UnityEngine::MonoBehaviour,
    DECLARE_INSTANCE_METHOD(void, Update);
    DECLARE_INSTANCE_FIELD(bool, leftInput);
    DECLARE_INSTANCE_FIELD(bool, wasLeftInput);
    DECLARE_INSTANCE_FIELD(bool, rightInput);
    DECLARE_INSTANCE_FIELD(bool, wasRightInput);
)
