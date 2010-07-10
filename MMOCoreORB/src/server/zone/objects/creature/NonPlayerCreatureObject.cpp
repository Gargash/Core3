/*
 *	server/zone/objects/creature/NonPlayerCreatureObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "NonPlayerCreatureObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/creature/events/CreatureThinkEvent.h"

#include "server/zone/objects/creature/events/CreatureMoveEvent.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	NonPlayerCreatureObjectStub
 */

NonPlayerCreatureObject::NonPlayerCreatureObject() : CreatureObject(DummyConstructorParameter::instance()) {
	_impl = new NonPlayerCreatureObjectImplementation();
	_impl->_setStub(this);
}

NonPlayerCreatureObject::NonPlayerCreatureObject(DummyConstructorParameter* param) : CreatureObject(param) {
}

NonPlayerCreatureObject::~NonPlayerCreatureObject() {
}


void NonPlayerCreatureObject::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((NonPlayerCreatureObjectImplementation*) _impl)->initializeTransientMembers();
}

void NonPlayerCreatureObject::activateRecovery() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((NonPlayerCreatureObjectImplementation*) _impl)->activateRecovery();
}

void NonPlayerCreatureObject::doRecovery() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((NonPlayerCreatureObjectImplementation*) _impl)->doRecovery();
}

void NonPlayerCreatureObject::doMovement() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		((NonPlayerCreatureObjectImplementation*) _impl)->doMovement();
}

void NonPlayerCreatureObject::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(msg);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		((NonPlayerCreatureObjectImplementation*) _impl)->fillAttributeList(msg, object);
}

void NonPlayerCreatureObject::loadTemplateData(SharedObjectTemplate* templateData) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((NonPlayerCreatureObjectImplementation*) _impl)->loadTemplateData(templateData);
}

int NonPlayerCreatureObject::inflictDamage(TangibleObject* attacker, int damageType, int damage, bool destroy, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(attacker);
		method.addSignedIntParameter(damageType);
		method.addSignedIntParameter(damage);
		method.addBooleanParameter(destroy);
		method.addBooleanParameter(notifyClient);

		return method.executeWithSignedIntReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->inflictDamage(attacker, damageType, damage, destroy, notifyClient);
}

bool NonPlayerCreatureObject::isAttackableBy(CreatureObject* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(object);

		return method.executeWithBooleanReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->isAttackableBy(object);
}

bool NonPlayerCreatureObject::isNonPlayerCreature() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		return method.executeWithBooleanReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->isNonPlayerCreature();
}

float NonPlayerCreatureObject::getKinetic() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getKinetic();
}

float NonPlayerCreatureObject::getEnergy() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getEnergy();
}

float NonPlayerCreatureObject::getElectricity() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getElectricity();
}

float NonPlayerCreatureObject::getStun() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getStun();
}

float NonPlayerCreatureObject::getBlast() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getBlast();
}

float NonPlayerCreatureObject::getHeat() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getHeat();
}

float NonPlayerCreatureObject::getCold() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getCold();
}

float NonPlayerCreatureObject::getAcid() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getAcid();
}

float NonPlayerCreatureObject::getLightSaber() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getLightSaber();
}

bool NonPlayerCreatureObject::isStalker() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithBooleanReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->isStalker();
}

bool NonPlayerCreatureObject::isBaby() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithBooleanReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->isBaby();
}

bool NonPlayerCreatureObject::isKiller() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return method.executeWithBooleanReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->isKiller();
}

float NonPlayerCreatureObject::getTame() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getTame();
}

String NonPlayerCreatureObject::getMeatType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		method.executeWithAsciiReturn(_return_getMeatType);
		return _return_getMeatType;
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getMeatType();
}

String NonPlayerCreatureObject::getBoneType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		method.executeWithAsciiReturn(_return_getBoneType);
		return _return_getBoneType;
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getBoneType();
}

String NonPlayerCreatureObject::getHideType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		method.executeWithAsciiReturn(_return_getHideType);
		return _return_getHideType;
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getHideType();
}

float NonPlayerCreatureObject::getMilk() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getMilk();
}

float NonPlayerCreatureObject::getHideMax() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getHideMax();
}

float NonPlayerCreatureObject::getBoneMax() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getBoneMax();
}

float NonPlayerCreatureObject::getMeatMax() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getMeatMax();
}

unsigned int NonPlayerCreatureObject::getFerocity() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getFerocity();
}

unsigned int NonPlayerCreatureObject::getArmor() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getArmor();
}

bool NonPlayerCreatureObject::hasOrganics() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		return method.executeWithBooleanReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->hasOrganics();
}

/*
 *	NonPlayerCreatureObjectImplementation
 */

NonPlayerCreatureObjectImplementation::NonPlayerCreatureObjectImplementation(DummyConstructorParameter* param) : CreatureObjectImplementation(param) {
	_initializeImplementation();
}

NonPlayerCreatureObjectImplementation::~NonPlayerCreatureObjectImplementation() {
}


void NonPlayerCreatureObjectImplementation::finalize() {
}

void NonPlayerCreatureObjectImplementation::_initializeImplementation() {
	_setClassHelper(NonPlayerCreatureObjectHelper::instance());

	_serializationHelperMethod();
}

void NonPlayerCreatureObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (NonPlayerCreatureObject*) stub;
	CreatureObjectImplementation::_setStub(stub);
}

DistributedObjectStub* NonPlayerCreatureObjectImplementation::_getStub() {
	return _this;
}

NonPlayerCreatureObjectImplementation::operator const NonPlayerCreatureObject*() {
	return _this;
}

void NonPlayerCreatureObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void NonPlayerCreatureObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void NonPlayerCreatureObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void NonPlayerCreatureObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void NonPlayerCreatureObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void NonPlayerCreatureObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void NonPlayerCreatureObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void NonPlayerCreatureObjectImplementation::_serializationHelperMethod() {
	CreatureObjectImplementation::_serializationHelperMethod();

	_setClassName("NonPlayerCreatureObject");

	addSerializableVariable("thinkEvent", &thinkEvent);
	addSerializableVariable("moveEvent", &moveEvent);
	addSerializableVariable("skillCommands", &skillCommands);
	addSerializableVariable("baby", &baby);
}

NonPlayerCreatureObjectImplementation::NonPlayerCreatureObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(76):  		Logger.setLoggingName("NonPlayerCreatureObject");
	Logger::setLoggingName("NonPlayerCreatureObject");
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(77):  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(78):  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(80):  		baby = false;
	baby = false;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(82):  		npcTemplate = null;
	npcTemplate = NULL;
}

bool NonPlayerCreatureObjectImplementation::isAttackableBy(CreatureObject* object) {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(124):  		if 
	if (object == _this)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(125):  			return false;
	return false;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(127):  		return 
	if (_this->isDead())	// server/zone/objects/creature/NonPlayerCreatureObject.idl(128):  			return false;
	return false;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(130):  true;
	return true;
}

bool NonPlayerCreatureObjectImplementation::isNonPlayerCreature() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(134):  		return true;
	return true;
}

float NonPlayerCreatureObjectImplementation::getKinetic() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(138):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(139):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(141):  npcTemplate.getKinetic();
	return npcTemplate->getKinetic();
}

float NonPlayerCreatureObjectImplementation::getEnergy() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(145):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(146):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(148):  npcTemplate.getEnergy();
	return npcTemplate->getEnergy();
}

float NonPlayerCreatureObjectImplementation::getElectricity() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(152):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(153):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(155):  npcTemplate.getElectricity();
	return npcTemplate->getElectricity();
}

float NonPlayerCreatureObjectImplementation::getStun() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(159):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(160):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(162):  npcTemplate.getStun();
	return npcTemplate->getStun();
}

float NonPlayerCreatureObjectImplementation::getBlast() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(166):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(167):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(169):  npcTemplate.getBlast();
	return npcTemplate->getBlast();
}

float NonPlayerCreatureObjectImplementation::getHeat() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(173):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(174):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(176):  npcTemplate.getHeat();
	return npcTemplate->getHeat();
}

float NonPlayerCreatureObjectImplementation::getCold() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(180):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(181):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(183):  npcTemplate.getCold();
	return npcTemplate->getCold();
}

float NonPlayerCreatureObjectImplementation::getAcid() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(187):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(188):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(190):  npcTemplate.getAcid();
	return npcTemplate->getAcid();
}

float NonPlayerCreatureObjectImplementation::getLightSaber() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(194):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(195):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(197):  npcTemplate.getLightSaber();
	return npcTemplate->getLightSaber();
}

bool NonPlayerCreatureObjectImplementation::isStalker() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(201):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(202):  			return false;
	return false;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(204):  npcTemplate.isStalker();
	return npcTemplate->isStalker();
}

bool NonPlayerCreatureObjectImplementation::isBaby() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(208):  		return baby;
	return baby;
}

bool NonPlayerCreatureObjectImplementation::isKiller() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(212):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(213):  			return false;
	return false;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(215):  npcTemplate.isKiller();
	return npcTemplate->isKiller();
}

float NonPlayerCreatureObjectImplementation::getTame() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(219):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(220):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(222):  npcTemplate.getTame();
	return npcTemplate->getTame();
}

String NonPlayerCreatureObjectImplementation::getMeatType() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(226):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(227):  			return "";
	return "";
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(229):  npcTemplate.getMeatType();
	return npcTemplate->getMeatType();
}

String NonPlayerCreatureObjectImplementation::getBoneType() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(233):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(234):  			return "";
	return "";
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(236):  npcTemplate.getBoneType();
	return npcTemplate->getBoneType();
}

String NonPlayerCreatureObjectImplementation::getHideType() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(240):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(241):  			return "";
	return "";
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(243):  npcTemplate.getHideType();
	return npcTemplate->getHideType();
}

float NonPlayerCreatureObjectImplementation::getMilk() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(247):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(248):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(250):  npcTemplate.getMilk();
	return npcTemplate->getMilk();
}

float NonPlayerCreatureObjectImplementation::getHideMax() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(254):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(255):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(257):  npcTemplate.getHideMax();
	return npcTemplate->getHideMax();
}

float NonPlayerCreatureObjectImplementation::getBoneMax() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(261):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(262):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(264):  npcTemplate.getBoneMax();
	return npcTemplate->getBoneMax();
}

float NonPlayerCreatureObjectImplementation::getMeatMax() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(268):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(269):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(271):  npcTemplate.getMeatMax();
	return npcTemplate->getMeatMax();
}

unsigned int NonPlayerCreatureObjectImplementation::getFerocity() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(275):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(276):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(278):  npcTemplate.getFerocity();
	return npcTemplate->getFerocity();
}

unsigned int NonPlayerCreatureObjectImplementation::getArmor() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(282):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(283):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(285):  npcTemplate.getArmor();
	return npcTemplate->getArmor();
}

/*
 *	NonPlayerCreatureObjectAdapter
 */

NonPlayerCreatureObjectAdapter::NonPlayerCreatureObjectAdapter(NonPlayerCreatureObjectImplementation* obj) : CreatureObjectAdapter(obj) {
}

Packet* NonPlayerCreatureObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		activateRecovery();
		break;
	case 8:
		doRecovery();
		break;
	case 9:
		doMovement();
		break;
	case 10:
		fillAttributeList((AttributeListMessage*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case 11:
		resp->insertSignedInt(inflictDamage((TangibleObject*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter(), inv->getBooleanParameter()));
		break;
	case 12:
		resp->insertBoolean(isAttackableBy((CreatureObject*) inv->getObjectParameter()));
		break;
	case 13:
		resp->insertBoolean(isNonPlayerCreature());
		break;
	case 14:
		resp->insertFloat(getKinetic());
		break;
	case 15:
		resp->insertFloat(getEnergy());
		break;
	case 16:
		resp->insertFloat(getElectricity());
		break;
	case 17:
		resp->insertFloat(getStun());
		break;
	case 18:
		resp->insertFloat(getBlast());
		break;
	case 19:
		resp->insertFloat(getHeat());
		break;
	case 20:
		resp->insertFloat(getCold());
		break;
	case 21:
		resp->insertFloat(getAcid());
		break;
	case 22:
		resp->insertFloat(getLightSaber());
		break;
	case 23:
		resp->insertBoolean(isStalker());
		break;
	case 24:
		resp->insertBoolean(isBaby());
		break;
	case 25:
		resp->insertBoolean(isKiller());
		break;
	case 26:
		resp->insertFloat(getTame());
		break;
	case 27:
		resp->insertAscii(getMeatType());
		break;
	case 28:
		resp->insertAscii(getBoneType());
		break;
	case 29:
		resp->insertAscii(getHideType());
		break;
	case 30:
		resp->insertFloat(getMilk());
		break;
	case 31:
		resp->insertFloat(getHideMax());
		break;
	case 32:
		resp->insertFloat(getBoneMax());
		break;
	case 33:
		resp->insertFloat(getMeatMax());
		break;
	case 34:
		resp->insertInt(getFerocity());
		break;
	case 35:
		resp->insertInt(getArmor());
		break;
	case 36:
		resp->insertBoolean(hasOrganics());
		break;
	default:
		return NULL;
	}

	return resp;
}

void NonPlayerCreatureObjectAdapter::initializeTransientMembers() {
	((NonPlayerCreatureObjectImplementation*) impl)->initializeTransientMembers();
}

void NonPlayerCreatureObjectAdapter::activateRecovery() {
	((NonPlayerCreatureObjectImplementation*) impl)->activateRecovery();
}

void NonPlayerCreatureObjectAdapter::doRecovery() {
	((NonPlayerCreatureObjectImplementation*) impl)->doRecovery();
}

void NonPlayerCreatureObjectAdapter::doMovement() {
	((NonPlayerCreatureObjectImplementation*) impl)->doMovement();
}

void NonPlayerCreatureObjectAdapter::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	((NonPlayerCreatureObjectImplementation*) impl)->fillAttributeList(msg, object);
}

int NonPlayerCreatureObjectAdapter::inflictDamage(TangibleObject* attacker, int damageType, int damage, bool destroy, bool notifyClient) {
	return ((NonPlayerCreatureObjectImplementation*) impl)->inflictDamage(attacker, damageType, damage, destroy, notifyClient);
}

bool NonPlayerCreatureObjectAdapter::isAttackableBy(CreatureObject* object) {
	return ((NonPlayerCreatureObjectImplementation*) impl)->isAttackableBy(object);
}

bool NonPlayerCreatureObjectAdapter::isNonPlayerCreature() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->isNonPlayerCreature();
}

float NonPlayerCreatureObjectAdapter::getKinetic() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getKinetic();
}

float NonPlayerCreatureObjectAdapter::getEnergy() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getEnergy();
}

float NonPlayerCreatureObjectAdapter::getElectricity() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getElectricity();
}

float NonPlayerCreatureObjectAdapter::getStun() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getStun();
}

float NonPlayerCreatureObjectAdapter::getBlast() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getBlast();
}

float NonPlayerCreatureObjectAdapter::getHeat() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getHeat();
}

float NonPlayerCreatureObjectAdapter::getCold() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getCold();
}

float NonPlayerCreatureObjectAdapter::getAcid() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getAcid();
}

float NonPlayerCreatureObjectAdapter::getLightSaber() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getLightSaber();
}

bool NonPlayerCreatureObjectAdapter::isStalker() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->isStalker();
}

bool NonPlayerCreatureObjectAdapter::isBaby() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->isBaby();
}

bool NonPlayerCreatureObjectAdapter::isKiller() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->isKiller();
}

float NonPlayerCreatureObjectAdapter::getTame() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getTame();
}

String NonPlayerCreatureObjectAdapter::getMeatType() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getMeatType();
}

String NonPlayerCreatureObjectAdapter::getBoneType() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getBoneType();
}

String NonPlayerCreatureObjectAdapter::getHideType() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getHideType();
}

float NonPlayerCreatureObjectAdapter::getMilk() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getMilk();
}

float NonPlayerCreatureObjectAdapter::getHideMax() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getHideMax();
}

float NonPlayerCreatureObjectAdapter::getBoneMax() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getBoneMax();
}

float NonPlayerCreatureObjectAdapter::getMeatMax() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getMeatMax();
}

unsigned int NonPlayerCreatureObjectAdapter::getFerocity() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getFerocity();
}

unsigned int NonPlayerCreatureObjectAdapter::getArmor() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getArmor();
}

bool NonPlayerCreatureObjectAdapter::hasOrganics() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->hasOrganics();
}

/*
 *	NonPlayerCreatureObjectHelper
 */

NonPlayerCreatureObjectHelper* NonPlayerCreatureObjectHelper::staticInitializer = NonPlayerCreatureObjectHelper::instance();

NonPlayerCreatureObjectHelper::NonPlayerCreatureObjectHelper() {
	className = "NonPlayerCreatureObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void NonPlayerCreatureObjectHelper::finalizeHelper() {
	NonPlayerCreatureObjectHelper::finalize();
}

DistributedObject* NonPlayerCreatureObjectHelper::instantiateObject() {
	return new NonPlayerCreatureObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* NonPlayerCreatureObjectHelper::instantiateServant() {
	return new NonPlayerCreatureObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* NonPlayerCreatureObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new NonPlayerCreatureObjectAdapter((NonPlayerCreatureObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

