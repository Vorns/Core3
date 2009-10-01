/*
 *	server/zone/objects/tangible/TangibleObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef TANGIBLEOBJECT_H_
#define TANGIBLEOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "server/zone/objects/scene/variables/CustomizationVariables.h"

#include "server/zone/objects/scene/variables/DeltaVector.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "engine/lua/LuaObject.h"

#include "system/util/Vector.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObject : public SceneObject {
public:
	TangibleObject(LuaObject* templateData);

	void sendBaselinesTo(SceneObject* player);

	void setDefender(SceneObject* defender);

	void addDefender(SceneObject* defender);

	void removeDefender(SceneObject* defender);

	void removeDefenders();

	void setCombatState();

	void clearCombatState(bool clearDefenders = true);

	bool hasDefender(SceneObject* defender);

	byte getUnknownByte();

	int getObjectCount();

	int getMaxCondition();

	int getConditionDamage();

	int getVolume();

	float getComplexity();

	unsigned int getOptionsBitmask();

	unsigned int getPvpStatusBitmask();

	void getCustomizationString(String& variables);

	DeltaVector<ManagedReference<SceneObject* > >* getDefenderList();

	void setCustomizationString(const String& vars);

protected:
	TangibleObject(DummyConstructorParameter* param);

	virtual ~TangibleObject();

	friend class TangibleObjectHelper;
};

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObjectImplementation : public SceneObjectImplementation {
protected:
	bool targetable;

	float complexity;

	int volume;

	CustomizationVariables customizationVariables;

	int conditionDamage;

	int maxCondition;

	int objectCount;

	unsigned int optionsBitmask;

	unsigned int pvpStatusBitmask;

	byte unknownByte;

	DeltaVector<ManagedReference<SceneObject* > > defenderList;

public:
	TangibleObjectImplementation(LuaObject* templateData);

	TangibleObjectImplementation(DummyConstructorParameter* param);

	virtual void sendBaselinesTo(SceneObject* player);

	virtual void setDefender(SceneObject* defender);

	virtual void addDefender(SceneObject* defender);

	virtual void removeDefender(SceneObject* defender);

	virtual void removeDefenders();

	virtual void setCombatState();

	virtual void clearCombatState(bool clearDefenders = true);

	bool hasDefender(SceneObject* defender);

	byte getUnknownByte();

	int getObjectCount();

	int getMaxCondition();

	int getConditionDamage();

	int getVolume();

	float getComplexity();

	unsigned int getOptionsBitmask();

	unsigned int getPvpStatusBitmask();

	void getCustomizationString(String& variables);

	DeltaVector<ManagedReference<SceneObject* > >* getDefenderList();

	void setCustomizationString(const String& vars);

	TangibleObject* _this;

	operator const TangibleObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~TangibleObjectImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class TangibleObject;
};

class TangibleObjectAdapter : public SceneObjectAdapter {
public:
	TangibleObjectAdapter(TangibleObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void sendBaselinesTo(SceneObject* player);

	void setDefender(SceneObject* defender);

	void addDefender(SceneObject* defender);

	void removeDefender(SceneObject* defender);

	void removeDefenders();

	void setCombatState();

	void clearCombatState(bool clearDefenders);

	bool hasDefender(SceneObject* defender);

	byte getUnknownByte();

	int getObjectCount();

	int getMaxCondition();

	int getConditionDamage();

	int getVolume();

	float getComplexity();

	unsigned int getOptionsBitmask();

	unsigned int getPvpStatusBitmask();

	void getCustomizationString(String& variables);

	void setCustomizationString(const String& vars);

protected:
	String _param0_getCustomizationString__String_;
	String _param0_setCustomizationString__String_;
};

class TangibleObjectHelper : public DistributedObjectClassHelper, public Singleton<TangibleObjectHelper> {
	static TangibleObjectHelper* staticInitializer;

public:
	TangibleObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<TangibleObjectHelper>;
};

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

#endif /*TANGIBLEOBJECT_H_*/
