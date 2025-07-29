#include <QDebug>
#include "movie.hpp"

Movie::Movie(QObject *parent)
    : QObject{parent}
    , m_mainCharacter{"Main Character"}
    {
    qDebug() << "Creating movie object";
}


QString Movie::mainCharacter() const {
    return m_mainCharacter;
}

void Movie::setMainCharacter(const QString &mainCharacter) {
    qDebug() << "Setting main character to be: " << mainCharacter;
    if (m_mainCharacter == mainCharacter)
        return;
    m_mainCharacter = mainCharacter;
    emit mainCharacterChanged();
}

QString Movie::title() const {
    return m_title;
}

void Movie::setTitle(const QString &title) {
    qDebug() << "Setting our title to be: " << title;
    if (m_title == title)
        return;
    m_title = title;
    emit titleChanged();
}
