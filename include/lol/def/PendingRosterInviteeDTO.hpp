#pragma once
#include "../base_def.hpp" 
#include "PendingRosterInviteeState.hpp"
namespace lol {
  struct PendingRosterInviteeDTO { 
    uint64_t inviteeId;
    uint64_t inviter;
    int64_t inviteTime;
    PendingRosterInviteeState inviteeState; 
  };
  inline void to_json(json& j, const PendingRosterInviteeDTO& v) {
    j["inviteeId"] = v.inviteeId; 
    j["inviter"] = v.inviter; 
    j["inviteTime"] = v.inviteTime; 
    j["inviteeState"] = v.inviteeState; 
  }
  inline void from_json(const json& j, PendingRosterInviteeDTO& v) {
    v.inviteeId = j.at("inviteeId").get<uint64_t>(); 
    v.inviter = j.at("inviter").get<uint64_t>(); 
    v.inviteTime = j.at("inviteTime").get<int64_t>(); 
    v.inviteeState = j.at("inviteeState").get<PendingRosterInviteeState>(); 
  }
}