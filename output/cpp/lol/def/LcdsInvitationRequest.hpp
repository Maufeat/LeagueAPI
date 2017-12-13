#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LcdsPlayer.hpp>
#include <lol/def/LcdsInvitationState.hpp>
#include <lol/def/LcdsInviter.hpp>
namespace lol {
  struct LcdsInvitationRequest { 
    std::string invitePayload;
    std::string invitationId;
    std::string inviteType;
    LcdsPlayer owner;
    std::string gameMetaData;
    LcdsInviter inviter;
    LcdsInvitationState invitationState; 
  };
  void to_json(json& j, const LcdsInvitationRequest& v) {
  j["invitePayload"] = v.invitePayload; 
  j["invitationId"] = v.invitationId; 
  j["inviteType"] = v.inviteType; 
  j["owner"] = v.owner; 
  j["gameMetaData"] = v.gameMetaData; 
  j["inviter"] = v.inviter; 
  j["invitationState"] = v.invitationState; 
  }
  void from_json(const json& j, LcdsInvitationRequest& v) {
  v.invitePayload = j.at("invitePayload").get<std::string>(); 
  v.invitationId = j.at("invitationId").get<std::string>(); 
  v.inviteType = j.at("inviteType").get<std::string>(); 
  v.owner = j.at("owner").get<LcdsPlayer>(); 
  v.gameMetaData = j.at("gameMetaData").get<std::string>(); 
  v.inviter = j.at("inviter").get<LcdsInviter>(); 
  v.invitationState = j.at("invitationState").get<LcdsInvitationState>(); 
  }
}