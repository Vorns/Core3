/*
 *	server/zone/objects/player/PlayerObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef PLAYEROBJECT_H_
#define PLAYEROBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {

class ZoneClientSession;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "engine/lua/LuaObject.h"

#include "server/zone/objects/intangible/IntangibleObject.h"

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerObject : public IntangibleObject {
public:
	PlayerObject(LuaObject* templateData);

	void loadTemplateData(LuaObject* templateData);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	unsigned int getCharacterBitmask();

	String getTitle();

	unsigned int getAdminLevel();

	void setCharacterBitmask(unsigned int bitmask);

	bool setCharacterBit(unsigned int bit, bool notifyClient = false);

	bool clearCharacterBit(unsigned int bit, bool notifyClient = false);

	void setTitle(const String& characterTitle);

protected:
	PlayerObject(DummyConstructorParameter* param);

	virtual ~PlayerObject();

	String _return_getTitle;

	friend class PlayerObjectHelper;
};

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerObjectImplementation : public IntangibleObjectImplementation {
protected:
	unsigned int characterBitmask;

	String title;

	unsigned int adminLevel;

public:
	static const int LFG = 1;

	static const int NEWBIEHELPER = 2;

	static const int ROLEPLAYER = 4;

	static const int AFK = 0x80;

	static const int LD = 0x100;

	static const int FACTIONRANK = 0x200;

	static const int ANONYMOUS = 0x80000000;

	static const int CSR = 1;

	static const int DEVELOPER = 2;

	static const int ADMIN = 3;

	static const int NORMAL = 4;

	static const int QA = 8;

	static const int EC = 16;

	static const int CSRJR = 32;

	static const int ECJR = 64;

	PlayerObjectImplementation(LuaObject* templateData);

	PlayerObjectImplementation(DummyConstructorParameter* param);

	void loadTemplateData(LuaObject* templateData);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	unsigned int getCharacterBitmask();

	String getTitle();

	unsigned int getAdminLevel();

	void setCharacterBitmask(unsigned int bitmask);

	bool setCharacterBit(unsigned int bit, bool notifyClient = false);

	bool clearCharacterBit(unsigned int bit, bool notifyClient = false);

	void setTitle(const String& characterTitle);

	PlayerObject* _this;

	operator const PlayerObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~PlayerObjectImplementation();

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

	friend class PlayerObject;
};

class PlayerObjectAdapter : public IntangibleObjectAdapter {
public:
	PlayerObjectAdapter(PlayerObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class PlayerObjectHelper : public DistributedObjectClassHelper, public Singleton<PlayerObjectHelper> {
	static PlayerObjectHelper* staticInitializer;

public:
	PlayerObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PlayerObjectHelper>;
};

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

#endif /*PLAYEROBJECT_H_*/
