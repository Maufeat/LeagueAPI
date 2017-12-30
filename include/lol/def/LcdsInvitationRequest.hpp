#pragma once
#include "../base_def.hpp" 
#include "LcdsPlayer.hpp"
#include "LcdsInvitationState.hpp"
#include "LcdsInviter.hpp"
namespace lol {
  struct LcdsInvitationRequest { 
    std::string invitationId;
    LcdsInvitationState invitationState;
    std::string inviteType;
    LcdsInviter inviter;
    LcdsPlayer owner;
    std::string gameMetaData;
    std::string invitePayload; 
  };
  inline void to_json(json& j, const LcdsInvitationRequest& v) {
    j["invitationId"] = v.invitationId; 
    j["invitationState"] = v.invitationState; 
    j["inviteType"] = v.inviteType; 
    j["inviter"] = v.inviter; 
    j["owner"] = v.owner; 
    j["gameMetaData"] = v.gameMetaData; 
    j["invitePayload"] = v.invitePayload; 
  }
  inline void from_json(const json& j, LcdsInvitationRequest& v) {
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.invitationState = j.at("invitationState").get<LcdsInvitationState>(); 
    v.inviteType = j.at("inviteType").get<std::string>(); 
    v.inviter = j.at("inviter").get<LcdsInviter>(); 
    v.owner = j.at("owner").get<LcdsPlayer>(); 
    v.gameMetaData = j.at("gameMetaData").get<std::string>(); 
    v.invitePayload = j.at("invitePayload").get<std::string>(); 
  }
}