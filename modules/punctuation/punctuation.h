/*
 * Copyright (C) 2017~2017 by CSSlayer
 * wengxt@gmail.com
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; see the file COPYING. If not,
 * see <http://www.gnu.org/licenses/>.
 */
#ifndef _PUNCTUATION_PUNCTUATION_H_
#define _PUNCTUATION_PUNCTUATION_H_

#include "notifications_public.h"
#include <fcitx-config/configuration.h>
#include <fcitx-config/enum.h>
#include <fcitx/addonfactory.h>
#include <fcitx/addoninstance.h>
#include <fcitx/addonmanager.h>
#include <fcitx/instance.h>

class Punctuation : public fcitx::AddonInstance {
public:
    Punctuation(fcitx::Instance *instance);
    ~Punctuation();

private:
    fcitx::Instance *instance_;
};

class PunctuationFactory : public fcitx::AddonFactory {
public:
    fcitx::AddonInstance *create(fcitx::AddonManager *manager) override {
        return new Punctuation(manager->instance());
    }
};

#endif // _PUNCTUATION_PUNCTUATION_H_