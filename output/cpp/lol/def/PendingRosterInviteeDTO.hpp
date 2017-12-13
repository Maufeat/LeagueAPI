#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PendingRosterInviteeState.hpp>
namespace lol {
  struct PendingRosterInviteeDTO { 
    int64_t inviteTime;
    uint64_t inviter;
    uint64_t inviteeId;
    PendingRosterInviteeState inviteeState; 
  };
  void to_json(json& j, const PendingRosterInviteeDTO& v) {
  j["inviteTime"] = v.inviteTime; 
  j["inviter"] = v.inviter; 
  j["inviteeId"] = v.inviteeId; 
  j["inviteeState"] = v.inviteeState; 
  }
  void from_json(const json& j, PendingRosterInviteeDTO& v) {
  v.inviteTime = j.at("inviteTime").get<int64_t>(); 
  v.inviter = j.at("inviter").get<uint64_t>(); 
  v.inviteeId = j.at("inviteeId").get<uint64_t>(); 
  v.inviteeState = j.at("inviteeState").get<PendingRosterInviteeState>(); 
  }
}