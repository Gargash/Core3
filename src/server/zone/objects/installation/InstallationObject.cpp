/*
 *	server/zone/objects/installation/InstallationObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "InstallationObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/installation/SyncrhonizedUiListenInstallationTask.h"

#include "server/zone/objects/resource/ResourceSpawn.h"

#include "server/zone/objects/resource/ResourceContainer.h"

#include "server/zone/objects/area/ActiveArea.h"

/*
 *	InstallationObjectStub
 */

InstallationObject::InstallationObject() : StructureObject(DummyConstructorParameter::instance()) {
	InstallationObjectImplementation* _implementation = new InstallationObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

InstallationObject::InstallationObject(DummyConstructorParameter* param) : StructureObject(param) {
}

InstallationObject::~InstallationObject() {
}


void InstallationObject::initializeTransientMembers() {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void InstallationObject::destroyObjectFromDatabase(bool destroyContainedObjects) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addBooleanParameter(destroyContainedObjects);

		method.executeWithVoidReturn();
	} else
		_implementation->destroyObjectFromDatabase(destroyContainedObjects);
}

void InstallationObject::fillAttributeList(AttributeListMessage* alm, PlayerCreature* object) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(alm, object);
}

void InstallationObject::loadTemplateData(SharedObjectTemplate* templateData) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void InstallationObject::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

int InstallationObject::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void InstallationObject::broadcastMessage(BasePacket* message, bool sendSelf) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(message);
		method.addBooleanParameter(sendSelf);

		method.executeWithVoidReturn();
	} else
		_implementation->broadcastMessage(message, sendSelf);
}

void InstallationObject::updateResourceContainerQuantity(ResourceContainer* container, int newQuantity, bool notifyClient) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(container);
		method.addSignedIntParameter(newQuantity);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		_implementation->updateResourceContainerQuantity(container, newQuantity, notifyClient);
}

void InstallationObject::updateToDatabaseAllObjects(bool startTask) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addBooleanParameter(startTask);

		method.executeWithVoidReturn();
	} else
		_implementation->updateToDatabaseAllObjects(startTask);
}

void InstallationObject::setOperating(bool operating, bool notifyClient) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addBooleanParameter(operating);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		_implementation->setOperating(operating, notifyClient);
}

void InstallationObject::activateUiSync() {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithVoidReturn();
	} else
		_implementation->activateUiSync();
}

void InstallationObject::updateOperators() {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		method.executeWithVoidReturn();
	} else
		_implementation->updateOperators();
}

void InstallationObject::verifyOperators() {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		method.executeWithVoidReturn();
	} else
		_implementation->verifyOperators();
}

void InstallationObject::updateInstallationWork() {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		method.executeWithVoidReturn();
	} else
		_implementation->updateInstallationWork();
}

void InstallationObject::handleStructureAddEnergy(PlayerCreature* player) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->handleStructureAddEnergy(player);
}

void InstallationObject::setActiveResource(ResourceContainer* container) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(container);

		method.executeWithVoidReturn();
	} else
		_implementation->setActiveResource(container);
}

void InstallationObject::changeActiveResourceID(unsigned long long spawnObjectID) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addUnsignedLongParameter(spawnObjectID);

		method.executeWithVoidReturn();
	} else
		_implementation->changeActiveResourceID(spawnObjectID);
}

void InstallationObject::addResourceToHopper(ResourceContainer* container) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addObjectParameter(container);

		method.executeWithVoidReturn();
	} else
		_implementation->addResourceToHopper(container);
}

void InstallationObject::removeResourceFromHopper(ResourceContainer* container) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addObjectParameter(container);

		method.executeWithVoidReturn();
	} else
		_implementation->removeResourceFromHopper(container);
}

void InstallationObject::clearResourceHopper() {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		method.executeWithVoidReturn();
	} else
		_implementation->clearResourceHopper();
}

float InstallationObject::getHopperSize() {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getHopperSize();
}

bool InstallationObject::updateMaintenance(Time& workingTime) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->updateMaintenance(workingTime);
}

void InstallationObject::updateHopper(Time& workingTime, bool shutdownAfterUpdate) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateHopper(workingTime, shutdownAfterUpdate);
}

int InstallationObject::getHopperItemQuantity(ResourceSpawn* spawn) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addObjectParameter(spawn);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getHopperItemQuantity(spawn);
}

ResourceContainer* InstallationObject::getContainerFromHopper(ResourceSpawn* spawn) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addObjectParameter(spawn);

		return (ResourceContainer*) method.executeWithObjectReturn();
	} else
		return _implementation->getContainerFromHopper(spawn);
}

unsigned long long InstallationObject::getActiveResourceSpawnID() {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		return method.executeWithUnsignedLongReturn();
	} else
		return _implementation->getActiveResourceSpawnID();
}

float InstallationObject::getActualRate() {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getActualRate();
}

void InstallationObject::broadcastToOperators(BasePacket* packet) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addObjectParameter(packet);

		method.executeWithVoidReturn();
	} else
		_implementation->broadcastToOperators(packet);
}

void InstallationObject::addOperator(PlayerCreature* player) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->addOperator(player);
}

void InstallationObject::removeOperator(PlayerCreature* player) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->removeOperator(player);
}

void InstallationObject::sendBaselinesTo(SceneObject* player) {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendBaselinesTo(player);
}

bool InstallationObject::isInstallationObject() {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isInstallationObject();
}

bool InstallationObject::isOperating() {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isOperating();
}

int InstallationObject::getInstallationType() {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getInstallationType();
}

float InstallationObject::getExtractionRate() {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getExtractionRate();
}

float InstallationObject::getHopperSizeMax() {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getHopperSizeMax();
}

HopperList* InstallationObject::getHopperList() {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getHopperList();
}

bool InstallationObject::isHarvesterObject() {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isHarvesterObject();
}

bool InstallationObject::isGeneratorObject() {
	InstallationObjectImplementation* _implementation = (InstallationObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isGeneratorObject();
}

DistributedObjectServant* InstallationObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void InstallationObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	InstallationObjectImplementation
 */

InstallationObjectImplementation::InstallationObjectImplementation(DummyConstructorParameter* param) : StructureObjectImplementation(param) {
	_initializeImplementation();
}


InstallationObjectImplementation::~InstallationObjectImplementation() {
}


void InstallationObjectImplementation::finalize() {
}

void InstallationObjectImplementation::_initializeImplementation() {
	_setClassHelper(InstallationObjectHelper::instance());

	_serializationHelperMethod();
}

void InstallationObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (InstallationObject*) stub;
	StructureObjectImplementation::_setStub(stub);
}

DistributedObjectStub* InstallationObjectImplementation::_getStub() {
	return _this;
}

InstallationObjectImplementation::operator const InstallationObject*() {
	return _this;
}

void InstallationObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void InstallationObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void InstallationObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void InstallationObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void InstallationObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void InstallationObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void InstallationObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void InstallationObjectImplementation::_serializationHelperMethod() {
	StructureObjectImplementation::_serializationHelperMethod();

	_setClassName("InstallationObject");

	addSerializableVariable("operating", &operating);
	addSerializableVariable("operatorList", &operatorList);
	addSerializableVariable("installationType", &installationType);
	addSerializableVariable("resourceHopperTimestamp", &resourceHopperTimestamp);
	addSerializableVariable("lastMaintenanceTime", &lastMaintenanceTime);
	addSerializableVariable("resourceHopper", &resourceHopper);
	addSerializableVariable("hopperSizeMax", &hopperSizeMax);
	addSerializableVariable("extractionRate", &extractionRate);
}

InstallationObjectImplementation::InstallationObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/installation/InstallationObject.idl(91):  		Logger.setLoggingName("InstallationObject");
	Logger::setLoggingName("InstallationObject");
	// server/zone/objects/installation/InstallationObject.idl(93):  		operating = false;
	operating = false;
	// server/zone/objects/installation/InstallationObject.idl(95):  		installationType = 0;
	installationType = 0;
	// server/zone/objects/installation/InstallationObject.idl(97):  		operatorList.setNoDuplicateInsertPlan();
	(&operatorList)->setNoDuplicateInsertPlan();
	// server/zone/objects/installation/InstallationObject.idl(99):  		hopperSizeMax = 10000;
	hopperSizeMax = 10000;
	// server/zone/objects/installation/InstallationObject.idl(100):  		extractionRate = 100;
	extractionRate = 100;
}

void InstallationObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/installation/InstallationObject.idl(104):  		super.initializeTransientMembers();
	StructureObjectImplementation::initializeTransientMembers();
	// server/zone/objects/installation/InstallationObject.idl(106):  		super.staticObject = false;
	StructureObjectImplementation::staticObject = false;
	// server/zone/objects/installation/InstallationObject.idl(108):  		operatorList.setNoDuplicateInsertPlan();
	(&operatorList)->setNoDuplicateInsertPlan();
	// server/zone/objects/installation/InstallationObject.idl(110):  		Logger.setLoggingName("InstallationObject");
	Logger::setLoggingName("InstallationObject");
}

void InstallationObjectImplementation::updateOperators() {
}

void InstallationObjectImplementation::addOperator(PlayerCreature* player) {
	// server/zone/objects/installation/InstallationObject.idl(225):  		operatorList.put(player);
	(&operatorList)->put(player);
}

void InstallationObjectImplementation::removeOperator(PlayerCreature* player) {
	// server/zone/objects/installation/InstallationObject.idl(229):  		operatorList.drop(player);
	(&operatorList)->drop(player);
}

bool InstallationObjectImplementation::isInstallationObject() {
	// server/zone/objects/installation/InstallationObject.idl(237):  		return true;
	return true;
}

bool InstallationObjectImplementation::isOperating() {
	// server/zone/objects/installation/InstallationObject.idl(241):  		return operating;
	return operating;
}

int InstallationObjectImplementation::getInstallationType() {
	// server/zone/objects/installation/InstallationObject.idl(245):  		return installationType;
	return installationType;
}

float InstallationObjectImplementation::getExtractionRate() {
	// server/zone/objects/installation/InstallationObject.idl(249):  		return extractionRate;
	return extractionRate;
}

float InstallationObjectImplementation::getHopperSizeMax() {
	// server/zone/objects/installation/InstallationObject.idl(253):  		return hopperSizeMax;
	return hopperSizeMax;
}

HopperList* InstallationObjectImplementation::getHopperList() {
	// server/zone/objects/installation/InstallationObject.idl(258):  		return resourceHopper;
	return (&resourceHopper);
}

bool InstallationObjectImplementation::isHarvesterObject() {
	// server/zone/objects/installation/InstallationObject.idl(262):  		return false;
	return false;
}

bool InstallationObjectImplementation::isGeneratorObject() {
	// server/zone/objects/installation/InstallationObject.idl(266):  		return false;
	return false;
}

/*
 *	InstallationObjectAdapter
 */

InstallationObjectAdapter::InstallationObjectAdapter(InstallationObjectImplementation* obj) : StructureObjectAdapter(obj) {
}

Packet* InstallationObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		destroyObjectFromDatabase(inv->getBooleanParameter());
		break;
	case 8:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 9:
		broadcastMessage((BasePacket*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 10:
		updateResourceContainerQuantity((ResourceContainer*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 11:
		updateToDatabaseAllObjects(inv->getBooleanParameter());
		break;
	case 12:
		setOperating(inv->getBooleanParameter(), inv->getBooleanParameter());
		break;
	case 13:
		activateUiSync();
		break;
	case 14:
		updateOperators();
		break;
	case 15:
		verifyOperators();
		break;
	case 16:
		updateInstallationWork();
		break;
	case 17:
		handleStructureAddEnergy((PlayerCreature*) inv->getObjectParameter());
		break;
	case 18:
		setActiveResource((ResourceContainer*) inv->getObjectParameter());
		break;
	case 19:
		changeActiveResourceID(inv->getUnsignedLongParameter());
		break;
	case 20:
		addResourceToHopper((ResourceContainer*) inv->getObjectParameter());
		break;
	case 21:
		removeResourceFromHopper((ResourceContainer*) inv->getObjectParameter());
		break;
	case 22:
		clearResourceHopper();
		break;
	case 23:
		resp->insertFloat(getHopperSize());
		break;
	case 24:
		resp->insertSignedInt(getHopperItemQuantity((ResourceSpawn*) inv->getObjectParameter()));
		break;
	case 25:
		resp->insertLong(getContainerFromHopper((ResourceSpawn*) inv->getObjectParameter())->_getObjectID());
		break;
	case 26:
		resp->insertLong(getActiveResourceSpawnID());
		break;
	case 27:
		resp->insertFloat(getActualRate());
		break;
	case 28:
		broadcastToOperators((BasePacket*) inv->getObjectParameter());
		break;
	case 29:
		addOperator((PlayerCreature*) inv->getObjectParameter());
		break;
	case 30:
		removeOperator((PlayerCreature*) inv->getObjectParameter());
		break;
	case 31:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 32:
		resp->insertBoolean(isInstallationObject());
		break;
	case 33:
		resp->insertBoolean(isOperating());
		break;
	case 34:
		resp->insertSignedInt(getInstallationType());
		break;
	case 35:
		resp->insertFloat(getExtractionRate());
		break;
	case 36:
		resp->insertFloat(getHopperSizeMax());
		break;
	case 37:
		resp->insertBoolean(isHarvesterObject());
		break;
	case 38:
		resp->insertBoolean(isGeneratorObject());
		break;
	default:
		return NULL;
	}

	return resp;
}

void InstallationObjectAdapter::initializeTransientMembers() {
	((InstallationObjectImplementation*) impl)->initializeTransientMembers();
}

void InstallationObjectAdapter::destroyObjectFromDatabase(bool destroyContainedObjects) {
	((InstallationObjectImplementation*) impl)->destroyObjectFromDatabase(destroyContainedObjects);
}

int InstallationObjectAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((InstallationObjectImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void InstallationObjectAdapter::broadcastMessage(BasePacket* message, bool sendSelf) {
	((InstallationObjectImplementation*) impl)->broadcastMessage(message, sendSelf);
}

void InstallationObjectAdapter::updateResourceContainerQuantity(ResourceContainer* container, int newQuantity, bool notifyClient) {
	((InstallationObjectImplementation*) impl)->updateResourceContainerQuantity(container, newQuantity, notifyClient);
}

void InstallationObjectAdapter::updateToDatabaseAllObjects(bool startTask) {
	((InstallationObjectImplementation*) impl)->updateToDatabaseAllObjects(startTask);
}

void InstallationObjectAdapter::setOperating(bool operating, bool notifyClient) {
	((InstallationObjectImplementation*) impl)->setOperating(operating, notifyClient);
}

void InstallationObjectAdapter::activateUiSync() {
	((InstallationObjectImplementation*) impl)->activateUiSync();
}

void InstallationObjectAdapter::updateOperators() {
	((InstallationObjectImplementation*) impl)->updateOperators();
}

void InstallationObjectAdapter::verifyOperators() {
	((InstallationObjectImplementation*) impl)->verifyOperators();
}

void InstallationObjectAdapter::updateInstallationWork() {
	((InstallationObjectImplementation*) impl)->updateInstallationWork();
}

void InstallationObjectAdapter::handleStructureAddEnergy(PlayerCreature* player) {
	((InstallationObjectImplementation*) impl)->handleStructureAddEnergy(player);
}

void InstallationObjectAdapter::setActiveResource(ResourceContainer* container) {
	((InstallationObjectImplementation*) impl)->setActiveResource(container);
}

void InstallationObjectAdapter::changeActiveResourceID(unsigned long long spawnObjectID) {
	((InstallationObjectImplementation*) impl)->changeActiveResourceID(spawnObjectID);
}

void InstallationObjectAdapter::addResourceToHopper(ResourceContainer* container) {
	((InstallationObjectImplementation*) impl)->addResourceToHopper(container);
}

void InstallationObjectAdapter::removeResourceFromHopper(ResourceContainer* container) {
	((InstallationObjectImplementation*) impl)->removeResourceFromHopper(container);
}

void InstallationObjectAdapter::clearResourceHopper() {
	((InstallationObjectImplementation*) impl)->clearResourceHopper();
}

float InstallationObjectAdapter::getHopperSize() {
	return ((InstallationObjectImplementation*) impl)->getHopperSize();
}

int InstallationObjectAdapter::getHopperItemQuantity(ResourceSpawn* spawn) {
	return ((InstallationObjectImplementation*) impl)->getHopperItemQuantity(spawn);
}

ResourceContainer* InstallationObjectAdapter::getContainerFromHopper(ResourceSpawn* spawn) {
	return ((InstallationObjectImplementation*) impl)->getContainerFromHopper(spawn);
}

unsigned long long InstallationObjectAdapter::getActiveResourceSpawnID() {
	return ((InstallationObjectImplementation*) impl)->getActiveResourceSpawnID();
}

float InstallationObjectAdapter::getActualRate() {
	return ((InstallationObjectImplementation*) impl)->getActualRate();
}

void InstallationObjectAdapter::broadcastToOperators(BasePacket* packet) {
	((InstallationObjectImplementation*) impl)->broadcastToOperators(packet);
}

void InstallationObjectAdapter::addOperator(PlayerCreature* player) {
	((InstallationObjectImplementation*) impl)->addOperator(player);
}

void InstallationObjectAdapter::removeOperator(PlayerCreature* player) {
	((InstallationObjectImplementation*) impl)->removeOperator(player);
}

void InstallationObjectAdapter::sendBaselinesTo(SceneObject* player) {
	((InstallationObjectImplementation*) impl)->sendBaselinesTo(player);
}

bool InstallationObjectAdapter::isInstallationObject() {
	return ((InstallationObjectImplementation*) impl)->isInstallationObject();
}

bool InstallationObjectAdapter::isOperating() {
	return ((InstallationObjectImplementation*) impl)->isOperating();
}

int InstallationObjectAdapter::getInstallationType() {
	return ((InstallationObjectImplementation*) impl)->getInstallationType();
}

float InstallationObjectAdapter::getExtractionRate() {
	return ((InstallationObjectImplementation*) impl)->getExtractionRate();
}

float InstallationObjectAdapter::getHopperSizeMax() {
	return ((InstallationObjectImplementation*) impl)->getHopperSizeMax();
}

bool InstallationObjectAdapter::isHarvesterObject() {
	return ((InstallationObjectImplementation*) impl)->isHarvesterObject();
}

bool InstallationObjectAdapter::isGeneratorObject() {
	return ((InstallationObjectImplementation*) impl)->isGeneratorObject();
}

/*
 *	InstallationObjectHelper
 */

InstallationObjectHelper* InstallationObjectHelper::staticInitializer = InstallationObjectHelper::instance();

InstallationObjectHelper::InstallationObjectHelper() {
	className = "InstallationObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void InstallationObjectHelper::finalizeHelper() {
	InstallationObjectHelper::finalize();
}

DistributedObject* InstallationObjectHelper::instantiateObject() {
	return new InstallationObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* InstallationObjectHelper::instantiateServant() {
	return new InstallationObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* InstallationObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new InstallationObjectAdapter((InstallationObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

