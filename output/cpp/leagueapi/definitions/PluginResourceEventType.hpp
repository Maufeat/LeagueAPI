#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class PluginResourceEventType { /**/ 
    Create_e = 0, /**/ 
    Delete_e = 2, /**/ 
    Update_e = 1, /**/ 
  };
  static void to_json(json& j, const PluginResourceEventType& v) {
    switch(v) { 
    case PluginResourceEventType::Create_e:
      j = "Create";
    break;
    case PluginResourceEventType::Delete_e:
      j = "Delete";
    break;
    case PluginResourceEventType::Update_e:
      j = "Update";
    break;
    };
  }
  static void from_json(const json& j, PluginResourceEventType& v) {
    auto s = j.get<std::string>(); 
    if(s == "Create") {
      v = PluginResourceEventType::Create_e;
      return;
    } 
    if(s == "Delete") {
      v = PluginResourceEventType::Delete_e;
      return;
    } 
    if(s == "Update") {
      v = PluginResourceEventType::Update_e;
      return;
    } 
  }
} 