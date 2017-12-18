#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct PatcherComponentResourceType {  
    project_e = 0,
    solution_e = 1,
  };
  inline void to_json(json& j, const PatcherComponentResourceType& v) {
    if(v == PatcherComponentResourceType::project_e) {
      j = "project";
      return;
    }
    if(v == PatcherComponentResourceType::solution_e) {
      j = "solution";
      return;
    }
  }
  inline void from_json(const json& j, PatcherComponentResourceType& v) {
    if(j.get<std::string>() == "project") {
      v = PatcherComponentResourceType::project_e;
      return;
    } 
    if(j.get<std::string>() == "solution") {
      v = PatcherComponentResourceType::solution_e;
      return;
    } 
  }
}