/*
 *	server/zone/objects/cell/CellObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef CELLOBJECT_H_
#define CELLOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "engine/lua/LuaObject.h"

#include "system/util/VectorMap.h"

namespace server {
namespace zone {
namespace objects {
namespace cell {

class CellObject : public SceneObject {
public:
	CellObject(LuaObject* templateData);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	int getCellNumber();

	void setCellNumber(int number);

protected:
	CellObject(DummyConstructorParameter* param);

	virtual ~CellObject();

	friend class CellObjectHelper;
};

} // namespace cell
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::cell;

namespace server {
namespace zone {
namespace objects {
namespace cell {

class CellObjectImplementation : public SceneObjectImplementation {
protected:
	int cellNumber;

public:
	CellObjectImplementation(LuaObject* templateData);

	CellObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	int getCellNumber();

	void setCellNumber(int number);

	CellObject* _this;

	operator const CellObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~CellObjectImplementation();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class CellObject;
};

class CellObjectAdapter : public SceneObjectAdapter {
public:
	CellObjectAdapter(CellObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class CellObjectHelper : public DistributedObjectClassHelper, public Singleton<CellObjectHelper> {
	static CellObjectHelper* staticInitializer;

public:
	CellObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CellObjectHelper>;
};

} // namespace cell
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::cell;

#endif /*CELLOBJECT_H_*/
