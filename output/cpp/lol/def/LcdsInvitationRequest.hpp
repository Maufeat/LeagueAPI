#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LcdsInvitationState.hpp>
#include <lol/def/LcdsPlayer.hpp>
#include <lol/def/LcdsInviter.hpp>
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
  void to_json(json& j, const LcdsInvitationRequest& v) {
  j["inviteType"] = v.inviteType; 
  j["invitationId"] = v.invitationId; 
  j["gameMetaData"] = v.gameMetaData; 
  j["invitePayload"] = v.invitePayload; 
  j["owner"] = v.owner; 
  j["invitationState"] = v.invitationState; 
  j["inviter"] = v.inviter; 
  }
  void from_json(const json& j, LcdsInvitationRequest& v) {
  v.inviteType = j.at("inviteType").get<std::string>(); 
  v.invitationId = j.at("invitationId").get<std::string>(); 
  v.gameMetaData = j.at("gameMetaData").get<std::string>(); 
  v.invitePayload = j.at("invitePayload").get<std::string>(); 
  v.owner = j.at("owner").get<LcdsPlayer>(); 
  v.invitationState = j.at("invitationState").get<LcdsInvitationState>(); 
  v.inviter = j.at("inviter").get<LcdsInviter>(); 
  }
}