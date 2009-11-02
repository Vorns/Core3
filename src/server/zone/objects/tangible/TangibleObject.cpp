/*
 *	server/zone/objects/tangible/TangibleObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "TangibleObject.h"

/*
 *	TangibleObjectStub
 */

TangibleObject::TangibleObject(LuaObject* templateData) : SceneObject(DummyConstructorParameter::instance()) {
	_impl = new TangibleObjectImplementation(templateData);
	_impl->_setStub(this);
}

TangibleObject::TangibleObject(DummyConstructorParameter* param) : SceneObject(param) {
}

TangibleObject::~TangibleObject() {
}

void TangibleObject::loadTemplateData(LuaObject* templateData) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((TangibleObjectImplementation*) _impl)->loadTemplateData(templateData);
}

void TangibleObject::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->initializeTransientMembers();
}

void TangibleObject::sendBaselinesTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->sendBaselinesTo(player);
}

void TangibleObject::setDefender(SceneObject* defender) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(defender);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setDefender(defender);
}

void TangibleObject::addDefender(SceneObject* defender) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(defender);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->addDefender(defender);
}

void TangibleObject::removeDefender(SceneObject* defender) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(defender);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->removeDefender(defender);
}

void TangibleObject::removeDefenders() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->removeDefenders();
}

void TangibleObject::setCombatState() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setCombatState();
}

void TangibleObject::clearCombatState(bool clearDefenders) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addBooleanParameter(clearDefenders);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->clearCombatState(clearDefenders);
}

bool TangibleObject::hasDefender(SceneObject* defender) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(defender);

		return method.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->hasDefender(defender);
}

byte TangibleObject::getUnknownByte() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithByteReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getUnknownByte();
}

CustomizationVariables* TangibleObject::getCustomizationVariables() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((TangibleObjectImplementation*) _impl)->getCustomizationVariables();
}

int TangibleObject::getObjectCount() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getObjectCount();
}

int TangibleObject::getMaxCondition() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getMaxCondition();
}

int TangibleObject::getConditionDamage() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		return method.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getConditionDamage();
}

int TangibleObject::getVolume() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		return method.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getVolume();
}

float TangibleObject::getComplexity() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return method.executeWithFloatReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getComplexity();
}

unsigned int TangibleObject::getOptionsBitmask() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getOptionsBitmask();
}

unsigned int TangibleObject::getPvpStatusBitmask() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getPvpStatusBitmask();
}

void TangibleObject::getCustomizationString(String& variables) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addAsciiParameter(variables);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->getCustomizationString(variables);
}

DeltaVector<ManagedReference<SceneObject* > >* TangibleObject::getDefenderList() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((TangibleObjectImplementation*) _impl)->getDefenderList();
}

void TangibleObject::setCustomizationString(const String& vars) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addAsciiParameter(vars);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setCustomizationString(vars);
}

/*
 *	TangibleObjectImplementation
 */

TangibleObjectImplementation::TangibleObjectImplementation(DummyConstructorParameter* param) : SceneObjectImplementation(param) {
	_initializeImplementation();
}

TangibleObjectImplementation::~TangibleObjectImplementation() {
}

void TangibleObjectImplementation::_initializeImplementation() {
	_setClassHelper(TangibleObjectHelper::instance());

	_serializationHelperMethod();
}

void TangibleObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (TangibleObject*) stub;
	SceneObjectImplementation::_setStub(stub);
}

DistributedObjectStub* TangibleObjectImplementation::_getStub() {
	return _this;
}

TangibleObjectImplementation::operator const TangibleObject*() {
	return _this;
}

void TangibleObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void TangibleObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void TangibleObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void TangibleObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void TangibleObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void TangibleObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void TangibleObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void TangibleObjectImplementation::_serializationHelperMethod() {
	SceneObjectImplementation::_serializationHelperMethod();

	_setClassName("TangibleObject");

	addSerializableVariable("targetable", &targetable);
	addSerializableVariable("complexity", &complexity);
	addSerializableVariable("volume", &volume);
	addSerializableVariable("customizationVariables", &customizationVariables);
	addSerializableVariable("conditionDamage", &conditionDamage);
	addSerializableVariable("maxCondition", &maxCondition);
	addSerializableVariable("objectCount", &objectCount);
	addSerializableVariable("optionsBitmask", &optionsBitmask);
	addSerializableVariable("pvpStatusBitmask", &pvpStatusBitmask);
	addSerializableVariable("unknownByte", &unknownByte);
	addSerializableVariable("defenderList", &defenderList);
}

TangibleObjectImplementation::TangibleObjectImplementation(LuaObject* templateData) : SceneObjectImplementation(templateData) {
	_initializeImplementation();
	// server/zone/objects/tangible/TangibleObject.idl(86):  Logger.setLoggingName("TangibleObject");
	Logger::setLoggingName("TangibleObject");
	// server/zone/objects/tangible/TangibleObject.idl(88):  loadTemplateData(templateData);
	loadTemplateData(templateData);
}

void TangibleObjectImplementation::setCombatState() {
}

void TangibleObjectImplementation::clearCombatState(bool clearDefenders) {
	// server/zone/objects/tangible/TangibleObject.idl(162):  }
	if (clearDefenders)	// server/zone/objects/tangible/TangibleObject.idl(163):  removeDefenders();
	removeDefenders();
}

bool TangibleObjectImplementation::hasDefender(SceneObject* defender) {
	// server/zone/objects/tangible/TangibleObject.idl(173):  
	for (	// server/zone/objects/tangible/TangibleObject.idl(173):  for (int i = 0;
	int i = 0;
	i < (&defenderList)->size();
 ++i) {
	// server/zone/objects/tangible/TangibleObject.idl(174):  }
	if ((&defenderList)->get(i) == defender)	// server/zone/objects/tangible/TangibleObject.idl(175):  return true;
	return true;
}
	// server/zone/objects/tangible/TangibleObject.idl(178):  return false;
	return false;
}

byte TangibleObjectImplementation::getUnknownByte() {
	// server/zone/objects/tangible/TangibleObject.idl(182):  return unknownByte;
	return unknownByte;
}

CustomizationVariables* TangibleObjectImplementation::getCustomizationVariables() {
	// server/zone/objects/tangible/TangibleObject.idl(188):  return customizationVariables;
	return (&customizationVariables);
}

int TangibleObjectImplementation::getObjectCount() {
	// server/zone/objects/tangible/TangibleObject.idl(192):  return objectCount;
	return objectCount;
}

int TangibleObjectImplementation::getMaxCondition() {
	// server/zone/objects/tangible/TangibleObject.idl(196):  return maxCondition;
	return maxCondition;
}

int TangibleObjectImplementation::getConditionDamage() {
	// server/zone/objects/tangible/TangibleObject.idl(200):  return conditionDamage;
	return conditionDamage;
}

int TangibleObjectImplementation::getVolume() {
	// server/zone/objects/tangible/TangibleObject.idl(204):  return volume;
	return volume;
}

float TangibleObjectImplementation::getComplexity() {
	// server/zone/objects/tangible/TangibleObject.idl(208):  return complexity;
	return complexity;
}

unsigned int TangibleObjectImplementation::getOptionsBitmask() {
	// server/zone/objects/tangible/TangibleObject.idl(212):  return optionsBitmask;
	return optionsBitmask;
}

unsigned int TangibleObjectImplementation::getPvpStatusBitmask() {
	// server/zone/objects/tangible/TangibleObject.idl(216):  return pvpStatusBitmask;
	return pvpStatusBitmask;
}

void TangibleObjectImplementation::getCustomizationString(String& variables) {
	// server/zone/objects/tangible/TangibleObject.idl(220):  customizationVariables.getData(variables);
	(&customizationVariables)->getData(variables);
}

DeltaVector<ManagedReference<SceneObject* > >* TangibleObjectImplementation::getDefenderList() {
	// server/zone/objects/tangible/TangibleObject.idl(225):  return defenderList;
	return (&defenderList);
}

void TangibleObjectImplementation::setCustomizationString(const String& vars) {
	// server/zone/objects/tangible/TangibleObject.idl(229):  customizationVariables.parseFromClientString(vars);
	(&customizationVariables)->parseFromClientString(vars);
}

/*
 *	TangibleObjectAdapter
 */

TangibleObjectAdapter::TangibleObjectAdapter(TangibleObjectImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* TangibleObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	default:
		return NULL;
	}

	return resp;
}

/*
 *	TangibleObjectHelper
 */

TangibleObjectHelper* TangibleObjectHelper::staticInitializer = TangibleObjectHelper::instance();

TangibleObjectHelper::TangibleObjectHelper() {
	className = "TangibleObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void TangibleObjectHelper::finalizeHelper() {
	TangibleObjectHelper::finalize();
}

DistributedObject* TangibleObjectHelper::instantiateObject() {
	return new TangibleObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* TangibleObjectHelper::instantiateServant() {
	return new TangibleObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* TangibleObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TangibleObjectAdapter((TangibleObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

