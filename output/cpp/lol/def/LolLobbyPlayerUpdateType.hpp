#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLobbyPlayerUpdateType {  
    Direct_e = 1,
    None_e = 0,
    RMS_e = 3,
    ServiceProxy_e = 2,
  };
  void to_json(json& j, const LolLobbyPlayerUpdateType& v) {
    if(v == LolLobbyPlayerUpdateType::Direct_e) {
      j = "Direct";
      return;
    }
    if(v == LolLobbyPlayerUpdateType::None_e) {
      j = "None";
      return;
    }
    if(v == LolLobbyPlayerUpdateType::RMS_e) {
      j = "RMS";
      return;
    }
    if(v == LolLobbyPlayerUpdateType::ServiceProxy_e) {
      j = "ServiceProxy";
      return;
    }
  }
  void from_json(const json& j, LolLobbyPlayerUpdateType& v) {
    if(j.get<std::string>() == "Direct") {
      v = LolLobbyPlayerUpdateType::Direct_e;
      return;
    } 
    if(j.get<std::string>() == "None") {
      v = LolLobbyPlayerUpdateType::None_e;
      return;
    } 
    if(j.get<std::string>() == "RMS") {
      v = LolLobbyPlayerUpdateType::RMS_e;
      return;
    } 
    if(j.get<std::string>() == "ServiceProxy") {
      v = LolLobbyPlayerUpdateType::ServiceProxy_e;
      return;
    } 
  }
}