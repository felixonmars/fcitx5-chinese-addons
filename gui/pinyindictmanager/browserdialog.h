//
// Copyright (C) 2013~2018 by CSSlayer
// wengxt@gmail.com
//
// This library is free software; you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as
// published by the Free Software Foundation; either version 2.1 of the
// License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; see the file COPYING. If not,
// see <http://www.gnu.org/licenses/>.
//
#ifndef _PINYINDICTMANAGER_BROWSERDIALOG_H_
#define _PINYINDICTMANAGER_BROWSERDIALOG_H_

#include "ui_browserdialog.h"
#include <QDialog>
#include <QMessageBox>
#include <QUrl>

namespace fcitx {

class WebPage;

class BrowserDialog : public QDialog, public Ui::BrowserDialog {
    friend class WebPage;
    Q_OBJECT
public:
    explicit BrowserDialog(QWidget *parent = nullptr);
    virtual ~BrowserDialog();
    const QUrl &url() const { return url_; }
    const QString &name() const { return name_; }

private:
    bool linkClicked(const QUrl &url);
    QString decodeName(const QByteArray &in);
    QString name_;
    QUrl url_;
    WebPage *page_;
};

} // namespace fcitx

#endif // _PINYINDICTMANAGER_BROWSERDIALOG_H_
