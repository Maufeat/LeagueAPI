#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct BuildInfo { 
    std::string branchFull;
    int32_t codeBuildId;
    std::string gameBranchFull;
    std::string branch;
    std::string patchlineVisibleName;
    std::string version;
    int32_t gameDataBuildId;
    std::string gameBranch;
    int32_t contentBuildId;
    std::string patchline; 
  };
  void to_json(json& j, const BuildInfo& v) {
  j["branchFull"] = v.branchFull; 
  j["codeBuildId"] = v.codeBuildId; 
  j["gameBranchFull"] = v.gameBranchFull; 
  j["branch"] = v.branch; 
  j["patchlineVisibleName"] = v.patchlineVisibleName; 
  j["version"] = v.version; 
  j["gameDataBuildId"] = v.gameDataBuildId; 
  j["gameBranch"] = v.gameBranch; 
  j["contentBuildId"] = v.contentBuildId; 
  j["patchline"] = v.patchline; 
  }
  void from_json(const json& j, BuildInfo& v) {
  v.branchFull = j.at("branchFull").get<std::string>(); 
  v.codeBuildId = j.at("codeBuildId").get<int32_t>(); 
  v.gameBranchFull = j.at("gameBranchFull").get<std::string>(); 
  v.branch = j.at("branch").get<std::string>(); 
  v.patchlineVisibleName = j.at("patchlineVisibleName").get<std::string>(); 
  v.version = j.at("version").get<std::string>(); 
  v.gameDataBuildId = j.at("gameDataBuildId").get<int32_t>(); 
  v.gameBranch = j.at("gameBranch").get<std::string>(); 
  v.contentBuildId = j.at("contentBuildId").get<int32_t>(); 
  v.patchline = j.at("patchline").get<std::string>(); 
  }
}