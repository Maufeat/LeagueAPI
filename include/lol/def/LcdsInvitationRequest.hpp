#pragma once
#include "../base_def.hpp" 
#include "LcdsInvitationState.hpp"
#include "LcdsPlayer.hpp"
#include "LcdsInviter.hpp"
namespace lol {
  struct LcdsInvitationRequest { 
    LcdsInvitationState invitationState;
    LcdsInviter inviter;
    std::string invitationId;
    std::string gameMetaData;
    std::string inviteType;
    std::string invitePayload;
    LcdsPlayer owner; 
  };
  inline void to_json(json& j, const LcdsInvitationRequest& v) {
    j["invitationState"] = v.invitationState; 
    j["inviter"] = v.inviter; 
    j["invitationId"] = v.invitationId; 
    j["gameMetaData"] = v.gameMetaData; 
    j["inviteType"] = v.inviteType; 
    j["invitePayload"] = v.invitePayload; 
    j["owner"] = v.owner; 
  }
  inline void from_json(const json& j, LcdsInvitationRequest& v) {
    v.invitationState = j.at("invitationState").get<LcdsInvitationState>(); 
    v.inviter = j.at("inviter").get<LcdsInviter>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.gameMetaData = j.at("gameMetaData").get<std::string>(); 
    v.inviteType = j.at("inviteType").get<std::string>(); 
    v.invitePayload = j.at("invitePayload").get<std::string>(); 
    v.owner = j.at("owner").get<LcdsPlayer>(); 
  }
}