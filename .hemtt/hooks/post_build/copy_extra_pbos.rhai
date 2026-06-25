let pbos = [

];

for pbo in pbos {
    let src = HEMTT_RFS.join("tools").join("extra_pbos").join(pbo);
    if src.is_file() {
        src.copy(HEMTT_OUT.join("addons").join(pbo));
        print("Copied " + pbo + " to build output");
    } else {
        print("Warning: tools/extra_pbos/" + pbo + " not found, skipping");
    }
}
