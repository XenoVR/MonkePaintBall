#pragma once

#include "custom-types/shared/macros.hpp"
#include "UnityEngine/MonoBehaviour.hpp"
#include "UnityEngine/GameObject.hpp"
#include "UnityEngine/Transform.hpp"
#include "UnityEngine/Color.hpp"
#include "GlobalNamespace/VRRig.hpp"

DECLARE_CLASS_CODEGEN(PaintBall, RayCastPlayerSelector, UnityEngine::MonoBehaviour,
    DECLARE_INSTANCE_FIELD(bool, isRight);
    DECLARE_INSTANCE_METHOD(void, Update);
    DECLARE_INSTANCE_METHOD(void, Awake);
    DECLARE_INSTANCE_METHOD(UnityEngine::GameObject*, AttemptToFindPlayer);
    DECLARE_CTOR(ctor);

    DECLARE_STATIC_METHOD(UnityEngine::GameObject*, get_selectedPlayer);
    DECLARE_STATIC_METHOD(void, disable_point);
    DECLARE_STATIC_METHOD(void, set_PointColor, UnityEngine::Color color);
    DECLARE_STATIC_FIELD(UnityEngine::GameObject*, selectedPlayer);
    DECLARE_STATIC_FIELD(UnityEngine::Transform*, raycastEndPoint);
    DECLARE_STATIC_FIELD(bool, useLeftHand);
)