#pragma once

#include "BaseClass.h"
#include "MethodDescriptor.h"

namespace nanpy {
    class DefineClass : public BaseClass {

        public:
            void elaborate( nanpy::MethodDescriptor* m );

    };
};

