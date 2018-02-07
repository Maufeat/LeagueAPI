#pragma once
#include "../base_def.hpp" 
#include "LcdsInviter.hpp"
#include "LcdsPlayer.hpp"
#include "LcdsInvitationState.hpp"
namespace lol {
  struct LcdsInvitationRequest { 
    std::string invitationId;
    LcdsPlayer owner;
    LcdsInviter inviter;
    LcdsInvitationState invitationState;
    std::string gameMetaData;
    std::string inviteType;
    std::string invitePayload; 
  };
  inline void to_json(json& j, const LcdsInvitationRequest& v) {
    j["invitationId"] = v.invitationId; 
    j["owner"] = v.owner; 
    j["inviter"] = v.inviter; 
    j["invitationState"] = v.invitationState; 
    j["gameMetaData"] = v.gameMetaData; 
    j["inviteType"] = v.inviteType; 
    j["invitePayload"] = v.invitePayload; 
  }
  inline void from_json(const json& j, LcdsInvitationRequest& v) {
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.owner = j.at("owner").get<LcdsPlayer>(); 
    v.inviter = j.at("inviter").get<LcdsInviter>(); 
    v.invitationState = j.at("invitationState").get<LcdsInvitationState>(); 
    v.gameMetaData = j.at("gameMetaData").get<std::string>(); 
    v.inviteType = j.at("inviteType").get<std::string>(); 
    v.invitePayload = j.at("invitePayload").get<std::string>(); 
  }
}