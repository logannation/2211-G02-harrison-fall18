void drawSteps(float acc, float tmax, float stepWidth, int color, int width) {
  int nSteps = tmax/stepWidth;
  float stepHeight = stepWidth*acc;
  for(int k = 0; k < nSteps; k++) {
    float tstart = k*stepWidth;
    float tend = (k+1)*stepWidth;
    float xstart = k*stepHeight;
    float xend = (k+1)*stepHeight;
    TLine *hl = new TLine(tstart, xstart, tend, xstart);
    hl->SetLineColor(color);
    hl->SetLineWidth(width);
    hl->Draw();
    TLine *vl = new TLine(tend, xstart, tend, xend);
    vl->SetLineColor(color);
    vl->SetLineWidth(width);
    vl->Draw();
  }
}


void stepfcn() {

  TCanvas *can = new TCanvas();
  can->SetGrid();

  float acc = 1.0;
  float tmax = 5.0;
  TF1 *ff = new TF1("ff", Form("%3.2f*x", acc), 0, tmax);
  ff->SetTitle("");
  ff->GetXaxis()->SetTitle("t (s)");
  ff->GetYaxis()->SetTitle("v (m/s)");
  ff->SetLineColor(kBlack);
  ff->SetLineWidth(5);
  ff->Draw();

  drawSteps(acc, tmax, 1.0, kBlue, 4);
  drawSteps(acc, tmax, 0.5, kRed, 2);

}

