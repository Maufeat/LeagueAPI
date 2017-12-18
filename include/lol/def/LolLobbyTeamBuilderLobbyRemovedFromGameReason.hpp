#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolLobbyTeamBuilderLobbyRemovedFromGameReason {  
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
  inline void to_json(json& j, const LolLobbyTeamBuilderLobbyRemovedFromGameReason& v) {
    if(v == LolLobbyTeamBuilderLobbyRemovedFromGameReason::Disbanded_e) {
      j = "Disbanded";
      return;
    }
    if(v == LolLobbyTeamBuilderLobbyRemovedFromGameReason::GameStartError_e) {
      j = "GameStartError";
      return;
    }
    if(v == LolLobbyTeamBuilderLobbyRemovedFromGameReason::Kicked_e) {
      j = "Kicked";
      return;
    }
    if(v == LolLobbyTeamBuilderLobbyRemovedFromGameReason::Left_e) {
      j = "Left";
      return;
    }
    if(v == LolLobbyTeamBuilderLobbyRemovedFromGameReason::None_e) {
      j = "None";
      return;
    }
    if(v == LolLobbyTeamBuilderLobbyRemovedFromGameReason::Other_e) {
      j = "Other";
      return;
    }
    if(v == LolLobbyTeamBuilderLobbyRemovedFromGameReason::ServiceError_e) {
      j = "ServiceError";
      return;
    }
    if(v == LolLobbyTeamBuilderLobbyRemovedFromGameReason::ServiceShutdown_e) {
      j = "ServiceShutdown";
      return;
    }
    if(v == LolLobbyTeamBuilderLobbyRemovedFromGameReason::Timeout_e) {
      j = "Timeout";
      return;
    }
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderLobbyRemovedFromGameReason& v) {
    if(j.get<std::string>() == "Disbanded") {
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::Disbanded_e;
      return;
    } 
    if(j.get<std::string>() == "GameStartError") {
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::GameStartError_e;
      return;
    } 
    if(j.get<std::string>() == "Kicked") {
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::Kicked_e;
      return;
    } 
    if(j.get<std::string>() == "Left") {
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::Left_e;
      return;
    } 
    if(j.get<std::string>() == "None") {
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::None_e;
      return;
    } 
    if(j.get<std::string>() == "Other") {
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::Other_e;
      return;
    } 
    if(j.get<std::string>() == "ServiceError") {
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::ServiceError_e;
      return;
    } 
    if(j.get<std::string>() == "ServiceShutdown") {
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::ServiceShutdown_e;
      return;
    } 
    if(j.get<std::string>() == "Timeout") {
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::Timeout_e;
      return;
    } 
  }
}