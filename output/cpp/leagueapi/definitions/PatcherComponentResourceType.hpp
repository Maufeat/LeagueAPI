#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class PatcherComponentResourceType { /**/ 
    project_e = 0, /**/ 
    solution_e = 1, /**/ 
  };
  static void to_json(json& j, const PatcherComponentResourceType& v) {
    switch(v) { 
    case PatcherComponentResourceType::project_e:
      j = "project";
    break;
    case PatcherComponentResourceType::solution_e:
      j = "solution";
    break;
    };
  }
  static void from_json(const json& j, PatcherComponentResourceType& v) {
    auto s = j.get<std::string>(); 
    if(s == "project") {
      v = PatcherComponentResourceType::project_e;
      return;
    } 
    if(s == "solution") {
      v = PatcherComponentResourceType::solution_e;
      return;
    } 
  }
} 