/****************************************************************************
** Meta object code from reading C++ file 'FrmAirlineTicketBooking.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../FrmAirlineTicketBooking.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FrmAirlineTicketBooking.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFrmAirlineTicketBookingENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFrmAirlineTicketBookingENDCLASS = QtMocHelpers::stringData(
    "FrmAirlineTicketBooking",
    "UpdateOrderInfo",
    "",
    "OrderInfo",
    "info",
    "on_btn_SigleSearch_clicked",
    "on_btn_Trans_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFrmAirlineTicketBookingENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[24];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[5];
    char stringdata5[27];
    char stringdata6[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFrmAirlineTicketBookingENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFrmAirlineTicketBookingENDCLASS_t qt_meta_stringdata_CLASSFrmAirlineTicketBookingENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "FrmAirlineTicketBooking"
        QT_MOC_LITERAL(24, 15),  // "UpdateOrderInfo"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 9),  // "OrderInfo"
        QT_MOC_LITERAL(51, 4),  // "info"
        QT_MOC_LITERAL(56, 26),  // "on_btn_SigleSearch_clicked"
        QT_MOC_LITERAL(83, 20)   // "on_btn_Trans_clicked"
    },
    "FrmAirlineTicketBooking",
    "UpdateOrderInfo",
    "",
    "OrderInfo",
    "info",
    "on_btn_SigleSearch_clicked",
    "on_btn_Trans_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFrmAirlineTicketBookingENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   35,    2, 0x08,    3 /* Private */,
       6,    0,   36,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FrmAirlineTicketBooking::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSFrmAirlineTicketBookingENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFrmAirlineTicketBookingENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFrmAirlineTicketBookingENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FrmAirlineTicketBooking, std::true_type>,
        // method 'UpdateOrderInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OrderInfo, std::false_type>,
        // method 'on_btn_SigleSearch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_Trans_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FrmAirlineTicketBooking::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FrmAirlineTicketBooking *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->UpdateOrderInfo((*reinterpret_cast< std::add_pointer_t<OrderInfo>>(_a[1]))); break;
        case 1: _t->on_btn_SigleSearch_clicked(); break;
        case 2: _t->on_btn_Trans_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OrderInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FrmAirlineTicketBooking::*)(OrderInfo );
            if (_t _q_method = &FrmAirlineTicketBooking::UpdateOrderInfo; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *FrmAirlineTicketBooking::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FrmAirlineTicketBooking::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFrmAirlineTicketBookingENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FrmAirlineTicketBooking::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void FrmAirlineTicketBooking::UpdateOrderInfo(OrderInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP