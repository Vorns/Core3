/*
 *	server/zone/managers/player/PlayerManager.h generated by engine3 IDL compiler 0.60
 */

#ifndef PLAYERMANAGER_H_
#define PLAYERMANAGER_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

namespace server {
namespace zone {

class ZoneProcessServerImplementation;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace managers {
namespace object {

class ObjectManager;

} // namespace object
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::object;

namespace server {
namespace zone {
namespace packets {

class MessageCallback;

} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets;

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/managers/player/PlayerMap.h"

#include "engine/log/Logger.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/core/ManagedObject.h"

namespace server {
namespace zone {
namespace managers {
namespace player {

class PlayerManager : public ManagedObject {
public:
	PlayerManager(ObjectManager* objMan, ZoneProcessServerImplementation* srv);

	bool createPlayer(MessageCallback* callback);

	bool checkPlayerName(MessageCallback* callback);

	bool checkExistentNameInDatabase(const String& firstName);

	TangibleObject* createHairObject(const String& hairObjectFile, const String& hairCustomization);

	bool createAllPlayerObjects(PlayerCreature* player);

	void createTutorialBuilding(PlayerCreature* player);

protected:
	PlayerManager(DummyConstructorParameter* param);

	virtual ~PlayerManager();

	friend class PlayerManagerHelper;
};

} // namespace player
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::player;

namespace server {
namespace zone {
namespace managers {
namespace player {

class PlayerManagerImplementation : public ManagedObjectImplementation, public Logger {
	ZoneProcessServerImplementation* server;

	PlayerMap* playerMap;

	ObjectManager* objectManager;

public:
	PlayerManagerImplementation(ObjectManager* objMan, ZoneProcessServerImplementation* srv);

	bool createPlayer(MessageCallback* callback);

	bool checkPlayerName(MessageCallback* callback);

	bool checkExistentNameInDatabase(const String& firstName);

	TangibleObject* createHairObject(const String& hairObjectFile, const String& hairCustomization);

	bool createAllPlayerObjects(PlayerCreature* player);

	void createTutorialBuilding(PlayerCreature* player);

	PlayerManager* _this;

	operator const PlayerManager*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~PlayerManagerImplementation();

	void _setStub(DistributedObjectStub* stub);

	void _serializationHelperMethod();

	friend class PlayerManager;
};

class PlayerManagerAdapter : public ManagedObjectAdapter {
public:
	PlayerManagerAdapter(PlayerManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	bool checkExistentNameInDatabase(const String& firstName);

	TangibleObject* createHairObject(const String& hairObjectFile, const String& hairCustomization);

	bool createAllPlayerObjects(PlayerCreature* player);

	void createTutorialBuilding(PlayerCreature* player);

protected:
	String _param0_checkExistentNameInDatabase__String_;
	String _param0_createHairObject__String_String_;
	String _param1_createHairObject__String_String_;
};

class PlayerManagerHelper : public DistributedObjectClassHelper, public Singleton<PlayerManagerHelper> {
	static PlayerManagerHelper* staticInitializer;

public:
	PlayerManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PlayerManagerHelper>;
};

} // namespace player
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::player;

#endif /*PLAYERMANAGER_H_*/
