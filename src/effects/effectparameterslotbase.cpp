#include <QtDebug>

#include "effects/effectparameter.h"
#include "control/controleffectknob.h"
#include "effects/effectparameterslotbase.h"
#include "control/controlobject.h"
#include "control/controlpushbutton.h"

EffectParameterSlotBase::EffectParameterSlotBase(const QString& group,
                                                 const unsigned int iParameterSlotNumber,
                                                 const EffectManifestParameter::ParameterType parameterType)
        : m_iParameterSlotNumber(iParameterSlotNumber),
          m_parameterType(parameterType),
          m_group(group),
          m_pEffectParameter(nullptr),
          m_pManifestParameter(nullptr),
          m_pControlLoaded(nullptr),
          m_pControlType(nullptr),
          m_dChainParameter(0.0) {

}

EffectParameterSlotBase::~EffectParameterSlotBase() {
    m_pEffectParameter = nullptr;
    m_pManifestParameter.clear();
    m_pEffectSlot = nullptr;
    delete m_pControlLoaded;
    delete m_pControlType;
}

QString EffectParameterSlotBase::name() const {
    if (m_pManifestParameter) {
        return m_pManifestParameter->name();
    }
    return QString();
}

QString EffectParameterSlotBase::shortName() const {
    if (m_pManifestParameter) {
        return m_pManifestParameter->shortName();
    }
    return QString();
}

QString EffectParameterSlotBase::description() const {
    if (m_pManifestParameter) {
        return m_pManifestParameter->description();
    }
    return tr("No effect loaded.");
}

EffectManifestParameter::ParameterType EffectParameterSlotBase::parameterType() const {
    return m_parameterType;
}

EffectManifestParameterPointer EffectParameterSlotBase::getManifest() {
    if (m_pManifestParameter) {
        return m_pManifestParameter;
    }
    return EffectManifestParameterPointer();
}

void EffectParameterSlotBase::syncSofttakeover() {
}

void EffectParameterSlotBase::onEffectMetaParameterChanged(double parameter, bool force) {
}