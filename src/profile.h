/*
 * Copyright (C) 2023 Debayan Sutradhar (rnayabed) (debayansutradhar3@gmail.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef PROFILE_H
#define PROFILE_H

#include <QString>
#include <QtGlobal>
#include <QUuid>
#include <QColor>
#include <QHash>

struct Profile
{
    Profile(const QString& name);
    Profile(const QString& id, const QString& name);

    QString id;
    QString name;
};

#endif // PROFILE_H
