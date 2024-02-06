/****************************************************************************
** Meta object code from reading C++ file 'cuadronotas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Registro-de-notas--main/cuadronotas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cuadronotas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CuadroNotas_t {
    QByteArrayData data[14];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CuadroNotas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CuadroNotas_t qt_meta_stringdata_CuadroNotas = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CuadroNotas"
QT_MOC_LITERAL(1, 12, 19), // "mostrarAcercaDeForm"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 33), // "on_actionIngresar_Datos_trigg..."
QT_MOC_LITERAL(4, 67, 19), // "registrarEstudiante"
QT_MOC_LITERAL(5, 87, 7), // "nombres"
QT_MOC_LITERAL(6, 95, 9), // "apellidos"
QT_MOC_LITERAL(7, 105, 5), // "nota1"
QT_MOC_LITERAL(8, 111, 5), // "nota2"
QT_MOC_LITERAL(9, 117, 12), // "guardarEnCSV"
QT_MOC_LITERAL(10, 130, 14), // "cargarDesdeCSV"
QT_MOC_LITERAL(11, 145, 27), // "on_actionArchivos_triggered"
QT_MOC_LITERAL(12, 173, 31), // "on_actionCargar_Datos_triggered"
QT_MOC_LITERAL(13, 205, 24) // "on_actionLinks_triggered"

    },
    "CuadroNotas\0mostrarAcercaDeForm\0\0"
    "on_actionIngresar_Datos_triggered\0"
    "registrarEstudiante\0nombres\0apellidos\0"
    "nota1\0nota2\0guardarEnCSV\0cargarDesdeCSV\0"
    "on_actionArchivos_triggered\0"
    "on_actionCargar_Datos_triggered\0"
    "on_actionLinks_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CuadroNotas[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    4,   56,    2, 0x08 /* Private */,
       9,    0,   65,    2, 0x08 /* Private */,
      10,    0,   66,    2, 0x08 /* Private */,
      11,    0,   67,    2, 0x08 /* Private */,
      12,    0,   68,    2, 0x08 /* Private */,
      13,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,    5,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CuadroNotas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CuadroNotas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mostrarAcercaDeForm(); break;
        case 1: _t->on_actionIngresar_Datos_triggered(); break;
        case 2: _t->registrarEstudiante((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->guardarEnCSV(); break;
        case 4: _t->cargarDesdeCSV(); break;
        case 5: _t->on_actionArchivos_triggered(); break;
        case 6: _t->on_actionCargar_Datos_triggered(); break;
        case 7: _t->on_actionLinks_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CuadroNotas::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_CuadroNotas.data,
    qt_meta_data_CuadroNotas,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CuadroNotas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CuadroNotas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CuadroNotas.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CuadroNotas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
