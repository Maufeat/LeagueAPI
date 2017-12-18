#pragma once
#include "../base_def.hpp" 
#include "LcdsInviter.hpp"
#include "LcdsPlayer.hpp"
#include "LcdsInvitationState.hpp"
namespace lol {
  struct LcdsInvitationRequest { 
    std::string inviteType;
    std::string invitationId;
    std::string gameMetaData;
    std::string invitePayload;
    LcdsPlayer owner;
    LcdsInvitationState invitationState;
    LcdsInviter inviter; 
  };
  inline void to_json(json& j, const LcdsInvitationRequest& v) {
    j["inviteType"] = v.inviteType; 
    j["invitationId"] = v.invitationId; 
    j["gameMetaData"] = v.gameMetaData; 
    j["invitePayload"] = v.invitePayload; 
    j["owner"] = v.owner; 
    j["invitationState"] = v.invitationState; 
    j["inviter"] = v.inviter; 
  }
  inline void from_json(const json& j, LcdsInvitationRequest& v) {
    v.inviteType = j.at("inviteType").get<std::string>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.gameMetaData = j.at("gameMetaData").get<std::string>(); 
    v.invitePayload = j.at("invitePayload").get<std::string>(); 
    v.owner = j.at("owner").get<LcdsPlayer>(); 
    v.invitationState = j.at("invitationState").get<LcdsInvitationState>(); 
    v.inviter = j.at("inviter").get<LcdsInviter>(); 
  }
}