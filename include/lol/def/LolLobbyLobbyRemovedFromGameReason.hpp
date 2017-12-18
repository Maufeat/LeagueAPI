#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolLobbyLobbyRemovedFromGameReason {  
    Disbanded_e = 2,
    GameStartError_e = 7,
    Kicked_e = 1,
    Left_e = 3,
    None_e = 0,
    Other_e = 5,
    ServiceError_e = 4,
    ServiceShutdown_e = 8,
    Timeout_e = 6,
  };
  inline void to_json(json& j, const LolLobbyLobbyRemovedFromGameReason& v) {
    if(v == LolLobbyLobbyRemovedFromGameReason::Disbanded_e) {
      j = "Disbanded";
      return;
    }
    if(v == LolLobbyLobbyRemovedFromGameReason::GameStartError_e) {
      j = "GameStartError";
      return;
    }
    if(v == LolLobbyLobbyRemovedFromGameReason::Kicked_e) {
      j = "Kicked";
      return;
    }
    if(v == LolLobbyLobbyRemovedFromGameReason::Left_e) {
      j = "Left";
      return;
    }
    if(v == LolLobbyLobbyRemovedFromGameReason::None_e) {
      j = "None";
      return;
    }
    if(v == LolLobbyLobbyRemovedFromGameReason::Other_e) {
      j = "Other";
      return;
    }
    if(v == LolLobbyLobbyRemovedFromGameReason::ServiceError_e) {
      j = "ServiceError";
      return;
    }
    if(v == LolLobbyLobbyRemovedFromGameReason::ServiceShutdown_e) {
      j = "ServiceShutdown";
      return;
    }
    if(v == LolLobbyLobbyRemovedFromGameReason::Timeout_e) {
      j = "Timeout";
      return;
    }
  }
  inline void from_json(const json& j, LolLobbyLobbyRemovedFromGameReason& v) {
    if(j.get<std::string>() == "Disbanded") {
      v = LolLobbyLobbyRemovedFromGameReason::Disbanded_e;
      return;
    } 
    if(j.get<std::string>() == "GameStartError") {
      v = LolLobbyLobbyRemovedFromGameReason::GameStartError_e;
      return;
    } 
    if(j.get<std::string>() == "Kicked") {
      v = LolLobbyLobbyRemovedFromGameReason::Kicked_e;
      return;
    } 
    if(j.get<std::string>() == "Left") {
      v = LolLobbyLobbyRemovedFromGameReason::Left_e;
      return;
    } 
    if(j.get<std::string>() == "None") {
      v = LolLobbyLobbyRemovedFromGameReason::None_e;
      return;
    } 
    if(j.get<std::string>() == "Other") {
      v = LolLobbyLobbyRemovedFromGameReason::Other_e;
      return;
    } 
    if(j.get<std::string>() == "ServiceError") {
      v = LolLobbyLobbyRemovedFromGameReason::ServiceError_e;
      return;
    } 
    if(j.get<std::string>() == "ServiceShutdown") {
      v = LolLobbyLobbyRemovedFromGameReason::ServiceShutdown_e;
      return;
    } 
    if(j.get<std::string>() == "Timeout") {
      v = LolLobbyLobbyRemovedFromGameReason::Timeout_e;
      return;
    } 
  }
}