#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct BuildInfo { 
    std::string patchline;
    std::string gameBranchFull;
    int32_t gameDataBuildId;
    std::string gameBranch;
    std::string branch;
    std::string version;
    int32_t contentBuildId;
    std::string branchFull;
    std::string patchlineVisibleName;
    int32_t codeBuildId; 
  };
  void to_json(json& j, const BuildInfo& v) {
    j["patchline"] = v.patchline; 
    j["gameBranchFull"] = v.gameBranchFull; 
    j["gameDataBuildId"] = v.gameDataBuildId; 
    j["gameBranch"] = v.gameBranch; 
    j["branch"] = v.branch; 
    j["version"] = v.version; 
    j["contentBuildId"] = v.contentBuildId; 
    j["branchFull"] = v.branchFull; 
    j["patchlineVisibleName"] = v.patchlineVisibleName; 
    j["codeBuildId"] = v.codeBuildId; 
  }
  void from_json(const json& j, BuildInfo& v) {
    v.patchline = j.at("patchline").get<std::string>(); 
    v.gameBranchFull = j.at("gameBranchFull").get<std::string>(); 
    v.gameDataBuildId = j.at("gameDataBuildId").get<int32_t>(); 
    v.gameBranch = j.at("gameBranch").get<std::string>(); 
    v.branch = j.at("branch").get<std::string>(); 
    v.version = j.at("version").get<std::string>(); 
    v.contentBuildId = j.at("contentBuildId").get<int32_t>(); 
    v.branchFull = j.at("branchFull").get<std::string>(); 
    v.patchlineVisibleName = j.at("patchlineVisibleName").get<std::string>(); 
    v.codeBuildId = j.at("codeBuildId").get<int32_t>(); 
  }
}